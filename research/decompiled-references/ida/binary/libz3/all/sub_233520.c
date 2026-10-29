__int64 __fastcall sub_233520(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  void *v11; // [rsp+0h] [rbp-88h]
  int v12[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h]

  v6 = a1 + 32;
  *(_QWORD *)(v6 - 16) = a4;
  *(_QWORD *)(v6 - 24) = a2;
  *(_QWORD *)(v6 - 8) = a4 + 104;
  *(_QWORD *)(v6 - 32) = &off_1C5F128;
  sub_16669D0();
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)v12 = 0;
  sub_14B7810(a1 + 56, a2, (int)v12, v7, v8, v9, v11);
  sub_18572D0(v12);
  sub_1839FF0(a1 + 72);
  *(_QWORD *)(a1 + 672) = 0;
  *(_QWORD *)(a1 + 680) = 0;
  *(_QWORD *)(a1 + 688) = 0;
  *(_QWORD *)(a1 + 696) = 0;
  *(_QWORD *)(a1 + 704) = 0;
  *(_QWORD *)(a1 + 712) = 0;
  *(_QWORD *)(a1 + 720) = 0;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_QWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 752) = 1;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = 1;
  *(_QWORD *)(a1 + 792) = 0;
  sub_17E9B40(a1 + 800, "unknown");
  sub_F49A30(a1 + 1320, a1 + 72, a1 + 800, a3);
  sub_180C0A0(a1 + 1608);
  *(_QWORD *)(a1 + 1656) = a1 + 1608;
  *(_QWORD *)(a1 + 1648) = a1 + 1600;
  *(_QWORD *)(a1 + 1664) = 0;
  *(_QWORD *)(a1 + 1672) = a1 + 1600;
  sub_1839FF0(a1 + 1680);
  *(_QWORD *)(a1 + 2280) = 0;
  *(_QWORD *)(a1 + 2288) = 0;
  *(_QWORD *)(a1 + 2296) = 0;
  *(_QWORD *)(a1 + 2304) = 0;
  *(_QWORD *)(a1 + 2312) = 0;
  *(_QWORD *)(a1 + 2320) = 0;
  *(_QWORD *)(a1 + 2328) = 0;
  *(_QWORD *)(a1 + 2336) = 0;
  *(_QWORD *)(a1 + 2344) = 0;
  *(_QWORD *)(a1 + 2352) = 0;
  *(_QWORD *)(a1 + 2360) = 1;
  *(_QWORD *)(a1 + 2368) = 0;
  *(_QWORD *)(a1 + 2376) = 0;
  *(_QWORD *)(a1 + 2384) = 0;
  *(_QWORD *)(a1 + 2392) = 1;
  *(_QWORD *)(a1 + 2400) = 0;
  *(_QWORD *)(a1 + 2408) = a1 + 1680;
  *(_QWORD *)(a1 + 2416) = a1 + 1600;
  *(_QWORD *)v12 = a1 + 1680;
  v13 = a1 + 1600;
  sub_17700C0(a1 + 2424, a2, v12);
  *(_QWORD *)(a1 + 3112) = a2;
  *(_QWORD *)(a1 + 3120) = 0;
  *(_QWORD *)(a1 + 3128) = a1 + 72;
  *(_QWORD *)(a1 + 3136) = 0;
  *(_QWORD *)(a1 + 3144) = 0;
  *(_DWORD *)(a1 + 3152) = 0;
  *(_OWORD *)(a1 + 3096) = 0;
  sub_1863170(a1 + 48, a3);
  return sub_F49DD0(a1 + 1320, a1 + 48);
}

