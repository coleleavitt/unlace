_DWORD *__fastcall sub_B8A9A0(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  int v4; // eax
  void *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rsi
  _DWORD *result; // rax
  _QWORD v13[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 104);
  sub_180C5A0(v13, "arith");
  v4 = sub_15DA4C0(v3 + 560, v13);
  sub_966710(a1, a2, v4);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 1;
  v5 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 80) = 0;
  v13[0] = 0;
  v13[1] = 0;
  v13[2] = 1;
  v13[3] = 0;
  sub_27B950((__int64)v5, a1 + 56, (int *)v13);
  *(_DWORD *)(a1 + 88) = 1;
  sub_25A130((char *)v13);
  *(_OWORD *)(a1 + 96) = 0;
  *(_QWORD *)a1 = off_1C73060;
  v13[0] = 0;
  sub_2527E0(a1 + 112, (__int64)v13);
  sub_18572D0(v13);
  sub_16669D0(a1 + 872, *(_QWORD *)(a2 + 104));
  *(_DWORD *)(a1 + 888) = 0;
  *(_QWORD *)(a1 + 896) = a1;
  *(_QWORD *)(a1 + 904) = a1 + 872;
  v6 = sub_186B270(0x180u);
  *(_QWORD *)(v6 + 32) = 0;
  *(_DWORD *)(v6 + 40) = 0;
  *(_QWORD *)(v6 + 80) = 0;
  *(_DWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 128) = 0;
  *(_DWORD *)(v6 + 136) = 0;
  *(_QWORD *)(v6 + 176) = 0;
  *(_DWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 224) = 0;
  *(_DWORD *)(v6 + 232) = 0;
  *(_QWORD *)(v6 + 272) = 0;
  *(_DWORD *)(v6 + 280) = 0;
  *(_QWORD *)(v6 + 320) = 0;
  *(_DWORD *)(v6 + 328) = 0;
  *(_QWORD *)(v6 + 368) = 0;
  *(_DWORD *)(v6 + 376) = 0;
  *(_OWORD *)v6 = 0;
  *(_OWORD *)(v6 + 16) = 0;
  *(_OWORD *)(v6 + 48) = 0;
  *(_OWORD *)(v6 + 64) = 0;
  *(_OWORD *)(v6 + 96) = 0;
  *(_OWORD *)(v6 + 112) = 0;
  *(_OWORD *)(v6 + 144) = 0;
  *(_OWORD *)(v6 + 160) = 0;
  *(_OWORD *)(v6 + 192) = 0;
  *(_OWORD *)(v6 + 208) = 0;
  *(_OWORD *)(v6 + 240) = 0;
  *(_OWORD *)(v6 + 256) = 0;
  *(_OWORD *)(v6 + 288) = 0;
  *(_OWORD *)(v6 + 304) = 0;
  *(_OWORD *)(v6 + 336) = 0;
  *(_OWORD *)(v6 + 352) = 0;
  *(_QWORD *)(a1 + 912) = v6;
  *(_DWORD *)(a1 + 928) = 0;
  *(_QWORD *)(a1 + 920) = 8;
  *(_BYTE *)(a1 + 952) = 1;
  *(_QWORD *)(a1 + 956) = -1;
  *(_DWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 1072) = a1 + 1040;
  *(_QWORD *)(a1 + 1080) = 0;
  *(_QWORD *)(a1 + 1088) = 0;
  *(_OWORD *)(a1 + 936) = 0;
  *(_OWORD *)(a1 + 968) = 0;
  *(_OWORD *)(a1 + 992) = 0;
  *(_OWORD *)(a1 + 1008) = 0;
  *(_OWORD *)(a1 + 1024) = 0;
  *(_OWORD *)(a1 + 1040) = 0;
  *(_OWORD *)(a1 + 1056) = 0;
  sub_313C10((unsigned int **)(a1 + 1080));
  v7 = *(_QWORD *)(a1 + 1080);
  *(_DWORD *)(v7 + 4LL * (unsigned int)(*(_DWORD *)(v7 - 4))++) = -1;
  sub_8C3430((_QWORD *)(a1 + 1088), 0x400u, 0);
  *(_QWORD *)(a1 + 1232) = a1 + 1208;
  *(_DWORD *)(a1 + 1096) = 0;
  *(_QWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1168) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1240) = a1 + 1048;
  *(_OWORD *)(a1 + 1104) = 0;
  *(_OWORD *)(a1 + 1120) = 0;
  *(_OWORD *)(a1 + 1152) = 0;
  *(_OWORD *)(a1 + 1176) = 0;
  *(_OWORD *)(a1 + 1192) = 0;
  *(_OWORD *)(a1 + 1208) = 0;
  *(_OWORD *)(a1 + 1248) = 0;
  sub_313C10((unsigned int **)(a1 + 1248));
  v8 = *(_QWORD *)(a1 + 1248);
  *(_DWORD *)(v8 + 4LL * (unsigned int)(*(_DWORD *)(v8 - 4))++) = -1;
  sub_8C3430((_QWORD *)(a1 + 1256), 0x400u, 0);
  *(_QWORD *)(a1 + 1304) = a1 + 1048;
  *(_DWORD *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1296) = a1 + 1272;
  *(_OWORD *)(a1 + 1272) = 0;
  *(_OWORD *)(a1 + 1312) = 0;
  sub_313C10((unsigned int **)(a1 + 1312));
  v9 = *(_QWORD *)(a1 + 1312);
  *(_DWORD *)(v9 + 4LL * (unsigned int)(*(_DWORD *)(v9 - 4))++) = -1;
  sub_8C3430((_QWORD *)(a1 + 1320), 0x400u, 0);
  *(_QWORD *)(a1 + 1352) = a1;
  *(_DWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1360) = 0;
  *(_QWORD *)(a1 + 1368) = 0;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_OWORD *)(a1 + 1336) = 0;
  v10 = (_QWORD *)sub_186B270(0x80u);
  *v10 = 0;
  v11 = *(_QWORD *)(a2 + 104);
  v10[2] = 0;
  v10[4] = 0;
  v10[6] = 0;
  v10[8] = 0;
  v10[10] = 0;
  v10[12] = 0;
  v10[14] = 0;
  *(_QWORD *)(a1 + 1384) = v10;
  *(_QWORD *)(a1 + 1392) = 8;
  *(_QWORD *)(a1 + 1416) = 0x3FE0000000000000LL;
  *(_DWORD *)(a1 + 1400) = 0;
  *(_QWORD *)(a1 + 1408) = 0;
  *(_WORD *)(a1 + 1424) = 0;
  *(_BYTE *)(a1 + 1426) = 0;
  sub_B75CF0(a1 + 1432, v11);
  *(_QWORD *)(a1 + 1584) = 0;
  *(_QWORD *)(a1 + 1592) = 0;
  *(_QWORD *)(a1 + 1600) = 0;
  *(_QWORD *)(a1 + 1608) = 1;
  *(_QWORD *)(a1 + 1616) = 0;
  *(_QWORD *)(a1 + 1624) = a1;
  *(_QWORD *)(a1 + 1632) = a1;
  result = (_DWORD *)sub_186B270(0x40u);
  result[1] = 0x80000000;
  result[3] = 0x80000000;
  result[5] = 0x80000000;
  result[7] = 0x80000000;
  result[9] = 0x80000000;
  result[11] = 0x80000000;
  result[13] = 0x80000000;
  result[15] = 0x80000000;
  *(_QWORD *)(a1 + 1640) = result;
  *(_QWORD *)(a1 + 1648) = 8;
  *(_DWORD *)(a1 + 1656) = 0;
  return result;
}

