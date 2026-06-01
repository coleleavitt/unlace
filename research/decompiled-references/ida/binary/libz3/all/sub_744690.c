__int64 __fastcall sub_744690(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  bool v9; // zf
  __int64 v10; // rax
  void *v12; // [rsp+0h] [rbp-68h]
  int v13[2]; // [rsp+28h] [rbp-40h] BYREF

  v2 = sub_186B270(0x2B0u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C54048;
  v3 = *(_DWORD *)(a2 + 712);
  *(_QWORD *)(v2 + 16) = a2;
  sub_1584DD0(v2 + 24, a2, v3 != 0);
  *(_QWORD *)(v2 + 168) = v2 + 560;
  *(_QWORD *)(v2 + 24) = &off_1C54008;
  *(_DWORD *)(v2 + 176) = 0;
  *(_QWORD *)(v2 + 184) = 0;
  sub_1584DD0(v2 + 192, a2, 0);
  *(_QWORD *)(v2 + 336) = 0;
  *(_DWORD *)(v2 + 344) = 0;
  *(_QWORD *)(v2 + 192) = &off_1C61DB8;
  sub_1584DD0(v2 + 352, a2, 0);
  *(_DWORD *)(v2 + 496) = 0;
  *(_QWORD *)(v2 + 512) = a2;
  *(_QWORD *)(v2 + 24) = &off_1C54028;
  *(_QWORD *)(v2 + 352) = &off_1C61DE0;
  *(_QWORD *)(v2 + 504) = 0;
  *(_QWORD *)(v2 + 520) = 0;
  *(_QWORD *)(v2 + 528) = a2;
  *(_QWORD *)(v2 + 536) = 0;
  *(_QWORD *)(v2 + 544) = a2;
  *(_QWORD *)(v2 + 552) = 0;
  *(_QWORD *)(v2 + 560) = a2;
  sub_1858590(v2 + 568, a1 + 680);
  sub_16744A0(v2 + 576, a2);
  *(_QWORD *)v13 = 0;
  sub_14B7810(v2 + 600, a2, (int)v13, v4, v5, v6, v12);
  sub_18572D0(v13);
  *(_QWORD *)(v2 + 656) = a2;
  *(_QWORD *)(v2 + 616) = 0;
  *(_QWORD *)(v2 + 664) = 0;
  *(_QWORD *)(v2 + 672) = 0;
  sub_1863170(v2 + 568, a1 + 680);
  v7 = sub_1859960(v2 + 568, "max_memory", 0xFFFFFFFFLL);
  v8 = (unsigned __int64)v7 << 20;
  v9 = v7 == -1;
  v10 = -1;
  if ( !v9 )
    v10 = v8;
  *(_QWORD *)(v2 + 640) = v10;
  *(_QWORD *)(v2 + 632) = (unsigned int)sub_1859960(v2 + 568, "max_steps", 0xFFFFFFFFLL);
  *(_DWORD *)(v2 + 624) = sub_1859960(v2 + 568, "max_bits", 4);
  *(_QWORD *)(v2 + 632) = 0xFFFFFFFFLL;
  sub_1858590(v2 + 680, a1 + 680);
  return v2;
}

