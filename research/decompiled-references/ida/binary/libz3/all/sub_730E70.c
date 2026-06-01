__int64 __fastcall sub_730E70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v5[48]; // [rsp+8h] [rbp-30h] BYREF

  v4 = 0;
  v2 = sub_186B270(0x4D8u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C53B28;
  *(_QWORD *)(v2 + 16) = a2;
  sub_2527E0(v2 + 24, (__int64)&v4);
  sub_18572D0(&v4);
  sub_1858590(v2 + 784, a1 + 784);
  *(_QWORD *)(v2 + 792) = a2;
  *(_QWORD *)(v2 + 800) = 0;
  *(_QWORD *)(v2 + 808) = 0;
  *(_QWORD *)(v2 + 816) = 0;
  *(_QWORD *)(v2 + 824) = 0;
  *(_QWORD *)(v2 + 832) = 0;
  *(_QWORD *)(v2 + 840) = 0;
  *(_QWORD *)(v2 + 848) = 0;
  *(_WORD *)(v2 + 856) = 0;
  *(_QWORD *)(v2 + 896) = 0;
  *(_QWORD *)(v2 + 904) = 0;
  *(_QWORD *)(v2 + 928) = 0;
  *(_QWORD *)(v2 + 936) = 0;
  *(_QWORD *)(v2 + 960) = 0;
  *(_QWORD *)(v2 + 968) = 0;
  *(_QWORD *)(v2 + 992) = 0;
  *(_QWORD *)(v2 + 1000) = 0;
  *(_QWORD *)(v2 + 1024) = 0;
  *(_QWORD *)(v2 + 1032) = 0;
  *(_QWORD *)(v2 + 1056) = 0;
  *(_QWORD *)(v2 + 1064) = 0;
  *(_QWORD *)(v2 + 1088) = 0;
  *(_QWORD *)(v2 + 1096) = 0;
  *(_OWORD *)(v2 + 864) = 0;
  *(_OWORD *)(v2 + 880) = 0;
  *(_OWORD *)(v2 + 912) = 0;
  *(_OWORD *)(v2 + 944) = 0;
  *(_OWORD *)(v2 + 976) = 0;
  *(_OWORD *)(v2 + 1008) = 0;
  *(_OWORD *)(v2 + 1040) = 0;
  *(_OWORD *)(v2 + 1072) = 0;
  *(_OWORD *)(v2 + 1104) = 0;
  *(_QWORD *)(v2 + 1120) = 0;
  *(_QWORD *)(v2 + 1128) = 0;
  *(_QWORD *)(v2 + 1152) = 0;
  *(_QWORD *)(v2 + 1160) = 0;
  *(_QWORD *)(v2 + 1184) = 0;
  *(_QWORD *)(v2 + 1192) = 0;
  *(_QWORD *)(v2 + 1200) = 0;
  *(_QWORD *)(v2 + 1224) = 0;
  *(_QWORD *)(v2 + 1232) = 0;
  *(_OWORD *)(v2 + 1136) = 0;
  *(_OWORD *)(v2 + 1168) = 0;
  *(_OWORD *)(v2 + 1208) = 0;
  v4 = a1 + 784;
  sub_17F9A60(v5, "smt");
  *(_BYTE *)(v2 + 856) = sub_1859630(v4, "candidate_models", v5, 0);
  *(_BYTE *)(v2 + 857) = sub_1859610(a1 + 784, "fail_if_inconclusive", 1);
  sub_18572D0(v5);
  return v2;
}

