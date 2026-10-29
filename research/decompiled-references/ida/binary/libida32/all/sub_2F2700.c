int __fastcall sub_2F2700(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  size_t v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm1
  unsigned __int64 v14; // rdx
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __m128i si128; // xmm3
  size_t v23; // rax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  size_t v28; // rax
  size_t v29; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __m128i v34; // xmm4
  __m128 v36; // [rsp+0h] [rbp-88h] BYREF
  __m128i v37; // [rsp+10h] [rbp-78h] BYREF
  __m128i v38; // [rsp+20h] [rbp-68h] BYREF
  char v39; // [rsp+33h] [rbp-55h] BYREF
  int v40; // [rsp+34h] [rbp-54h] BYREF
  char *v41; // [rsp+38h] [rbp-50h] BYREF
  const char *v42; // [rsp+40h] [rbp-48h] BYREF
  size_t v43; // [rsp+48h] [rbp-40h]

  v2 = j__strlen("The name of a function (or its substring) whose CFG is viewed/printed.");
  qword_2CB1610 = 0;
  v3 = v2;
  qword_2CB1618 = 0;
  qword_2CB1620 = 0;
  qword_2CB1600 = (__int64)&off_2C4B8B0;
  qword_2CB1608 = (unsigned int)qword_2CB1608 & 0x80000000;
  qword_2CB1648 = 0x100000000LL;
  qword_2CB1628 = 0;
  qword_2CB1630 = 0;
  qword_2CB1638 = 0;
  qword_2CB1640 = (__int64)&unk_2CB1650;
  qword_2CB1658 = (__int64)&unk_2CB1670;
  qword_2CB1660 = 1;
  dword_2CB1668 = 0;
  byte_2CB166C = 1;
  v4 = sub_21ED2B0("The name of a function (or its substring) whose CFG is viewed/printed.", a2);
  v5 = (unsigned int)qword_2CB1648;
  v6 = (unsigned int)qword_2CB1648 + 1LL;
  if ( v6 > HIDWORD(qword_2CB1648) )
  {
    v36.m128_u64[0] = v4;
    sub_22134E0((char *)&unk_2CB1650 - 16, &unk_2CB1650, v6, 8);
    v5 = (unsigned int)qword_2CB1648;
    v4 = v36.m128_u64[0];
  }
  v36.m128_u64[0] = (unsigned __int64)off_2BC0B48;
  v7 = _mm_loadh_ps((const double *)off_2C4D938);
  *(_QWORD *)(qword_2CB1640 + 8 * v5) = v4;
  qword_2CB1678 = (__int64)&byte_2CB1688;
  v37.m128i_i64[0] = (__int64)&byte_2CB16B0;
  qword_2CB1600 = (__int64)off_2C4B7E0;
  xmmword_2CB16E0 = (__int128)v7;
  v8 = _mm_loadh_ps((const double *)v37.m128i_i64);
  v37 = (__m128i)v7;
  xmmword_2CB1698 = (__int128)v8;
  LODWORD(qword_2CB1648) = qword_2CB1648 + 1;
  qword_2CB16C8 = (__int64)off_2BC0CB8;
  qword_2CB1680 = 0;
  byte_2CB1688 = 0;
  qword_2CB16A8 = 0;
  byte_2CB16B0 = 0;
  byte_2CB16C0 = 0;
  sub_21F3510(&qword_2CB1600, "cfg-func-name", 13);
  qword_2CB1628 = v3;
  BYTE2(qword_2CB1608) = BYTE2(qword_2CB1608) & 0x9F | 0x20;
  qword_2CB1620 = (__int64)"The name of a function (or its substring) whose CFG is viewed/printed.";
  sub_21F4400(&qword_2CB1600);
  __cxa_atexit(sub_1FC95A0, &qword_2CB1600, &off_2AFC540);
  v9 = j__strlen("The prefix used for the CFG dot file names.");
  qword_2CB1540 = (__int64)&unk_2CB1550;
  v10 = v9;
  qword_2CB1510 = 0;
  qword_2CB1500 = (__int64)&off_2C4B8B0;
  qword_2CB1508 = (unsigned int)qword_2CB1508 & 0x80000000;
  qword_2CB1548 = 0x100000000LL;
  qword_2CB1518 = 0;
  qword_2CB1520 = 0;
  qword_2CB1528 = 0;
  qword_2CB1530 = 0;
  qword_2CB1538 = 0;
  qword_2CB1558 = (__int64)&unk_2CB1570;
  qword_2CB1560 = 1;
  dword_2CB1568 = 0;
  byte_2CB156C = 1;
  v11 = sub_21ED2B0("The prefix used for the CFG dot file names.", &qword_2CB1600);
  v12 = (unsigned int)qword_2CB1548;
  v13 = _mm_load_si128(&v37);
  v14 = (unsigned int)qword_2CB1548 + 1LL;
  if ( v14 > HIDWORD(qword_2CB1548) )
  {
    v38 = v13;
    v37.m128i_i64[0] = v11;
    sub_22134E0((char *)&unk_2CB1550 - 16, &unk_2CB1550, v14, 8);
    v12 = (unsigned int)qword_2CB1548;
    v13 = _mm_load_si128(&v38);
    v11 = v37.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB1540 + 8 * v12) = v11;
  qword_2CB1578 = (__int64)&byte_2CB1588;
  v36.m128_u64[0] = (unsigned __int64)&byte_2CB15B0;
  qword_2CB1500 = (__int64)off_2C4B7E0;
  xmmword_2CB15E0 = (__int128)v13;
  v15 = _mm_loadh_ps((const double *)v36.m128_u64);
  qword_2CB15C8 = (__int64)off_2BC0CB8;
  xmmword_2CB1598 = (__int128)v15;
  LODWORD(qword_2CB1548) = qword_2CB1548 + 1;
  qword_2CB1580 = 0;
  byte_2CB1588 = 0;
  qword_2CB15A8 = 0;
  byte_2CB15B0 = 0;
  byte_2CB15C0 = 0;
  sub_21F3510(&qword_2CB1500, "cfg-dot-filename-prefix", 23);
  qword_2CB1528 = v10;
  BYTE2(qword_2CB1508) = BYTE2(qword_2CB1508) & 0x9F | 0x20;
  qword_2CB1520 = (__int64)"The prefix used for the CFG dot file names.";
  sub_21F4400(&qword_2CB1500);
  __cxa_atexit(sub_1FC95A0, &qword_2CB1500, &off_2AFC540);
  qword_2CB1450 = 0;
  qword_2CB1440 = (__int64)&off_2C4B8B0;
  qword_2CB1448 = (unsigned int)qword_2CB1448 & 0x80000000;
  qword_2CB1488 = 0x100000000LL;
  qword_2CB1458 = 0;
  qword_2CB1460 = 0;
  qword_2CB1468 = 0;
  qword_2CB1470 = 0;
  qword_2CB1478 = 0;
  qword_2CB1480 = (__int64)&unk_2CB1490;
  qword_2CB1498 = (__int64)&unk_2CB14B0;
  qword_2CB14A0 = 1;
  dword_2CB14A8 = 0;
  byte_2CB14AC = 1;
  v16 = sub_21ED2B0(sub_1FC95A0, &qword_2CB1500);
  v17 = (unsigned int)qword_2CB1488;
  v18 = (unsigned int)qword_2CB1488 + 1LL;
  if ( v18 > HIDWORD(qword_2CB1488) )
  {
    v36.m128_u64[0] = v16;
    sub_22134E0((char *)&unk_2CB1490 - 16, &unk_2CB1490, v18, 8);
    v17 = (unsigned int)qword_2CB1488;
    v16 = v36.m128_u64[0];
  }
  *(_QWORD *)(qword_2CB1480 + 8 * v17) = v16;
  qword_2CB14C0 = (__int64)off_2C474E8;
  word_2CB14C8 = 0;
  qword_2CB1440 = (__int64)off_2C4B848;
  v36 = _mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CB14E8 = (__int128)v36;
  qword_2CB14D0 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB1488) = qword_2CB1488 + 1;
  byte_2CB14B8 = 0;
  sub_21F3510(&qword_2CB1440, "cfg-hide-unreachable-paths", 26);
  byte_2CB14B8 = 0;
  word_2CB14C8 = 256;
  sub_21F4400(&qword_2CB1440);
  __cxa_atexit(sub_1FEA450, &qword_2CB1440, &off_2AFC540);
  qword_2CB1390 = 0;
  qword_2CB1380 = (__int64)&off_2C4B8B0;
  qword_2CB1388 = (unsigned int)qword_2CB1388 & 0x80000000;
  qword_2CB13C8 = 0x100000000LL;
  qword_2CB1398 = 0;
  qword_2CB13A0 = 0;
  qword_2CB13A8 = 0;
  qword_2CB13B0 = 0;
  qword_2CB13B8 = 0;
  qword_2CB13C0 = (__int64)&unk_2CB13D0;
  qword_2CB13D8 = (__int64)&unk_2CB13F0;
  qword_2CB13E0 = 1;
  dword_2CB13E8 = 0;
  byte_2CB13EC = 1;
  v19 = sub_21ED2B0(sub_1FEA450, &qword_2CB1440);
  v20 = (unsigned int)qword_2CB13C8;
  v21 = (unsigned int)qword_2CB13C8 + 1LL;
  if ( v21 > HIDWORD(qword_2CB13C8) )
  {
    v37.m128i_i64[0] = v19;
    sub_22134E0((char *)&unk_2CB13D0 - 16, &unk_2CB13D0, v21, 8);
    v20 = (unsigned int)qword_2CB13C8;
    v19 = v37.m128i_i64[0];
  }
  si128 = _mm_load_si128((const __m128i *)&v36);
  *(_QWORD *)(qword_2CB13C0 + 8 * v20) = v19;
  qword_2CB1400 = (__int64)off_2C474E8;
  qword_2CB1380 = (__int64)off_2C4B848;
  word_2CB1408 = 0;
  xmmword_2CB1428 = (__int128)si128;
  qword_2CB1410 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB13C8) = qword_2CB13C8 + 1;
  byte_2CB13F8 = 0;
  sub_21F3510(&qword_2CB1380, "cfg-hide-deoptimize-paths", 25);
  byte_2CB13F8 = 0;
  word_2CB1408 = 256;
  sub_21F4400(&qword_2CB1380);
  __cxa_atexit(sub_1FEA450, &qword_2CB1380, &off_2AFC540);
  v23 = j__strlen("Hide blocks with relative frequency below the given value");
  qword_2CB1300 = (__int64)&unk_2CB1310;
  v24 = v23;
  qword_2CB12D0 = 0;
  qword_2CB12C0 = (__int64)&off_2C4B8B0;
  qword_2CB12C8 = (unsigned int)qword_2CB12C8 & 0x80000000;
  qword_2CB1308 = 0x100000000LL;
  qword_2CB12D8 = 0;
  qword_2CB12E0 = 0;
  qword_2CB12E8 = 0;
  qword_2CB12F0 = 0;
  qword_2CB12F8 = 0;
  qword_2CB1318 = (__int64)&unk_2CB1330;
  qword_2CB1320 = 1;
  dword_2CB1328 = 0;
  byte_2CB132C = 1;
  v25 = sub_21ED2B0("Hide blocks with relative frequency below the given value", &qword_2CB1380);
  v26 = (unsigned int)qword_2CB1308;
  v27 = (unsigned int)qword_2CB1308 + 1LL;
  if ( v27 > HIDWORD(qword_2CB1308) )
  {
    v37.m128i_i64[0] = v25;
    sub_22134E0((char *)&unk_2CB1310 - 16, &unk_2CB1310, v27, 8);
    v26 = (unsigned int)qword_2CB1308;
    v25 = v37.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CB1300 + 8 * v26) = v25;
  xmmword_2CB1370 = (__int128)_mm_loadh_ps((const double *)off_2C4DC00);
  LODWORD(qword_2CB1308) = qword_2CB1308 + 1;
  qword_2CB1340 = (__int64)off_2C476B8;
  qword_2CB1338 = 0;
  byte_2CB1350 = 0;
  qword_2CB12C0 = (__int64)off_2C476D8;
  qword_2CB1348 = 0;
  qword_2CB1358 = (__int64)off_2BC0C58;
  sub_21F3510(&qword_2CB12C0, "cfg-hide-cold-paths", 19);
  qword_2CB12E8 = v24;
  qword_2CB12E0 = (__int64)"Hide blocks with relative frequency below the given value";
  qword_2CB1338 = 0;
  byte_2CB1350 = 1;
  qword_2CB1348 = 0;
  sub_21F4400(&qword_2CB12C0);
  __cxa_atexit(sub_1FEC5B0, &qword_2CB12C0, &off_2AFC540);
  v28 = j__strlen("Show heat colors in CFG");
  v41 = &v39;
  v42 = "Show heat colors in CFG";
  v38.m128i_i64[0] = (__int64)&v39;
  v37.m128i_i64[0] = (__int64)&v42;
  v43 = v28;
  v40 = 1;
  v39 = 1;
  sub_1FEC870(&unk_2CB1200, "cfg-heat-colors", &v41, &v40, &v42);
  __cxa_atexit(sub_1FEA450, &unk_2CB1200, &off_2AFC540);
  v43 = j__strlen("Use raw weights for labels. Use percentages as default.");
  v42 = "Use raw weights for labels. Use percentages as default.";
  v41 = (char *)v38.m128i_i64[0];
  v40 = 1;
  v39 = 0;
  sub_1FEC870(&unk_2CB1140, "cfg-raw-weights", &v41, &v40, v37.m128i_i64[0]);
  __cxa_atexit(sub_1FEA450, &unk_2CB1140, &off_2AFC540);
  v29 = j__strlen("Show edges labeled with weights");
  byte_2CB10EC = 1;
  qword_2CB1090 = 0;
  v30 = v29;
  qword_2CB1080 = (__int64)&off_2C4B8B0;
  qword_2CB1088 = (unsigned int)qword_2CB1088 & 0x80000000;
  qword_2CB10C8 = 0x100000000LL;
  qword_2CB1098 = 0;
  qword_2CB10A0 = 0;
  qword_2CB10A8 = 0;
  qword_2CB10B0 = 0;
  qword_2CB10B8 = 0;
  qword_2CB10C0 = (__int64)&unk_2CB10D0;
  qword_2CB10D8 = (__int64)&unk_2CB10F0;
  qword_2CB10E0 = 1;
  dword_2CB10E8 = 0;
  v31 = sub_21ED2B0("Show edges labeled with weights", &unk_2CB1140);
  v32 = (unsigned int)qword_2CB10C8;
  v33 = (unsigned int)qword_2CB10C8 + 1LL;
  if ( v33 > HIDWORD(qword_2CB10C8) )
  {
    v37.m128i_i64[0] = v31;
    sub_22134E0((char *)&unk_2CB10D0 - 16, &unk_2CB10D0, v33, 8);
    v32 = (unsigned int)qword_2CB10C8;
    v31 = v37.m128i_i64[0];
  }
  v34 = _mm_load_si128((const __m128i *)&v36);
  *(_QWORD *)(qword_2CB10C0 + 8 * v32) = v31;
  word_2CB1108 = 0;
  qword_2CB1100 = (__int64)off_2C474E8;
  qword_2CB1080 = (__int64)off_2C4B848;
  xmmword_2CB1128 = (__int128)v34;
  qword_2CB1110 = (__int64)off_2BC0B68;
  LODWORD(qword_2CB10C8) = qword_2CB10C8 + 1;
  byte_2CB10F8 = 0;
  sub_21F3510(&qword_2CB1080, "cfg-weights", 11);
  word_2CB1108 = 256;
  qword_2CB10A8 = v30;
  byte_2CB10F8 = 0;
  BYTE2(qword_2CB1088) = BYTE2(qword_2CB1088) & 0x9F | 0x20;
  qword_2CB10A0 = (__int64)"Show edges labeled with weights";
  sub_21F4400(&qword_2CB1080);
  return __cxa_atexit(sub_1FEA450, &qword_2CB1080, &off_2AFC540);
}

