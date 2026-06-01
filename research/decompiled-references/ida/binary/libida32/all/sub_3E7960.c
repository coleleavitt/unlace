__int64 (__fastcall **__fastcall sub_3E7960(__int64 a1))()
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v9; // rdx

  *(_QWORD *)a1 = 0;
  v2 = qword_2CA16B0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  v3 = xmmword_2CA16B8;
  if ( (_QWORD)xmmword_2CA16B8 )
  {
    v4 = (_QWORD *)v2;
    v5 = 0;
    do
    {
      if ( !*v4 )
      {
        *v4 = a1;
        v6 = v5;
        goto LABEL_6;
      }
      ++v5;
      ++v4;
    }
    while ( v5 != (_QWORD)xmmword_2CA16B8 );
    v6 = xmmword_2CA16B8;
    v9 = xmmword_2CA16B8 + 1;
  }
  else
  {
    v9 = 1;
    v6 = 0;
  }
  if ( *((_QWORD *)&xmmword_2CA16B8 + 1) < v9 )
  {
    qword_2CA16B0 = qvector_reserve(&qword_2CA16B0, v2, v9, 8);
    v3 = xmmword_2CA16B8;
    v2 = qword_2CA16B0;
  }
  *(_QWORD *)(v2 + 8 * v3) = a1;
  *(_QWORD *)&xmmword_2CA16B8 = xmmword_2CA16B8 + 1;
LABEL_6:
  *(_DWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 296) = a1 + 280;
  *(_QWORD *)(a1 + 304) = a1 + 280;
  *(_WORD *)(a1 + 520) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  *(_WORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 158) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 216) = -1;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 312) = 0;
  *(_QWORD *)(a1 + 320) = 0;
  *(_BYTE *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 436) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 524) = 0;
  *(_QWORD *)(a1 + 656) = 0;
  *(_OWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 232) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 732) = 0;
  *(_WORD *)(a1 + 740) = 0;
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 1320) = -1;
  *(_QWORD *)(a1 + 1328) = 0xFFFFFFFF00000004LL;
  *(_QWORD *)(a1 + 1336) = sub_396210(a1);
  *(_QWORD *)(a1 + 1344) = sub_39C000(a1);
  *(_QWORD *)(a1 + 1352) = sub_577730(a1);
  *(_QWORD *)(a1 + 1360) = sub_3E2480(a1);
  *(_QWORD *)(a1 + 1368) = sub_3D6FD0(a1);
  *(_QWORD *)(a1 + 1376) = sub_734880(a1);
  *(_QWORD *)(a1 + 1384) = sub_3AA140(a1);
  *(_QWORD *)(a1 + 1392) = sub_514900(a1);
  *(_QWORD *)(a1 + 1400) = sub_591F20(a1);
  *(_QWORD *)(a1 + 1408) = sub_407D80(a1);
  *(_QWORD *)(a1 + 1416) = sub_3799A0(a1);
  *(_QWORD *)(a1 + 1424) = sub_5AC560(a1);
  *(_QWORD *)(a1 + 1432) = sub_5BE3A0(a1);
  *(_QWORD *)(a1 + 1440) = sub_37CBF0(a1);
  *(_QWORD *)(a1 + 1448) = sub_40E880(a1);
  *(_QWORD *)(a1 + 1456) = sub_5ECBE0(a1);
  *(_QWORD *)(a1 + 1464) = sub_540D30(a1);
  *(_QWORD *)(a1 + 1472) = sub_61F530(a1);
  *(_QWORD *)(a1 + 1480) = sub_3C6DD0(a1);
  v7 = operator new(0x30u);
  *(_QWORD *)v7 = 0;
  *(_QWORD *)(v7 + 24) = 0;
  *(_QWORD *)(a1 + 1488) = v7;
  *(_OWORD *)(v7 + 8) = 0;
  *(_OWORD *)(v7 + 32) = 0;
  *(_QWORD *)(a1 + 1496) = sub_61FEE0(a1);
  *(_QWORD *)(a1 + 1504) = sub_6236F0(a1);
  *(_QWORD *)(a1 + 1512) = sub_62F2B0(a1);
  *(_QWORD *)(a1 + 1520) = sub_49E7C0(a1);
  *(_QWORD *)(a1 + 1528) = sub_4B2E00(a1);
  *(_QWORD *)(a1 + 1536) = sub_4C8970(a1);
  *(_QWORD *)(a1 + 1544) = sub_78E610(a1);
  *(_QWORD *)(a1 + 1552) = sub_4CEE90(a1);
  *(_QWORD *)(a1 + 1560) = sub_4DAB10(a1);
  *(_QWORD *)(a1 + 1568) = sub_4F68C0(a1);
  *(_QWORD *)(a1 + 1576) = sub_5003D0(a1);
  *(_QWORD *)(a1 + 1584) = sub_669410(a1);
  *(_QWORD *)(a1 + 1592) = sub_509060(a1);
  *(_QWORD *)(a1 + 1600) = sub_356670(a1);
  *(_QWORD *)(a1 + 1608) = sub_6719B0(a1);
  *(_QWORD *)(a1 + 1616) = sub_516510(a1);
  *(_QWORD *)(a1 + 1624) = sub_674A30(a1);
  *(_QWORD *)(a1 + 1632) = sub_51B410(a1);
  *(_QWORD *)(a1 + 1640) = sub_677CD0(a1);
  *(_QWORD *)(a1 + 1648) = sub_67A8F0(a1);
  *(_QWORD *)(a1 + 1656) = sub_565620(a1);
  *(_QWORD *)(a1 + 1664) = sub_56D3A0(a1);
  *(_QWORD *)(a1 + 1672) = sub_698250(a1);
  *(_QWORD *)(a1 + 1680) = sub_6A95D0(a1);
  *(_QWORD *)(a1 + 1688) = sub_41F7C0(a1);
  *(_QWORD *)(a1 + 1696) = sub_708DC0(a1);
  *(_QWORD *)(a1 + 1704) = sub_6B5EF0(a1);
  *(_QWORD *)(a1 + 1712) = 0;
  sub_613490(a1 + 552, a1);
  sub_615160(**(_QWORD **)(a1 + 1480), 3, 4);
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  memset(
    (void *)((a1 + 768) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 768) & 0xFFFFFFF8) + 904) >> 3));
  *(_QWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 1312) = 0;
  memset(
    (void *)((a1 + 912) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)a1 - (((_DWORD)a1 + 912) & 0xFFFFFFF8) + 1320) >> 3));
  byte_2CA16A4 = 1;
  off_2C57DA0 = sub_3E7530;
  return &off_2C57DA0;
}

