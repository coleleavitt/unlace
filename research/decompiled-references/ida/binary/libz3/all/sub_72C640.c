__int64 __fastcall sub_72C640(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+8h] [rbp-40h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  _BYTE v9[48]; // [rsp+18h] [rbp-30h] BYREF

  sub_17F9A60(v7, "parallel");
  if ( (unsigned __int8)sub_1859630(a2, "enable", v7, 0) )
  {
    v4 = sub_B00C00(a1, a2, a3);
    v5 = sub_E3B350(v4, a2);
  }
  else
  {
    v5 = sub_186B270(0x4D8u);
    *(_DWORD *)(v5 + 8) = 0;
    *(_QWORD *)v5 = &off_1C53B28;
    *(_QWORD *)(v5 + 16) = a1;
    v8 = 0;
    sub_2527E0(v5 + 24, (__int64)&v8);
    sub_18572D0(&v8);
    sub_1858590(v5 + 784, a2);
    *(_QWORD *)(v5 + 792) = a1;
    *(_QWORD *)(v5 + 800) = 0;
    *(_QWORD *)(v5 + 808) = 0;
    *(_QWORD *)(v5 + 816) = 0;
    *(_QWORD *)(v5 + 824) = 0;
    *(_QWORD *)(v5 + 832) = 0;
    *(_QWORD *)(v5 + 840) = 0;
    *(_QWORD *)(v5 + 848) = 0;
    *(_WORD *)(v5 + 856) = 0;
    *(_QWORD *)(v5 + 896) = 0;
    *(_QWORD *)(v5 + 904) = 0;
    *(_QWORD *)(v5 + 928) = 0;
    *(_QWORD *)(v5 + 936) = 0;
    *(_QWORD *)(v5 + 960) = 0;
    *(_QWORD *)(v5 + 968) = 0;
    *(_QWORD *)(v5 + 992) = 0;
    *(_QWORD *)(v5 + 1000) = 0;
    *(_QWORD *)(v5 + 1024) = 0;
    *(_QWORD *)(v5 + 1032) = 0;
    *(_QWORD *)(v5 + 1056) = 0;
    *(_QWORD *)(v5 + 1064) = 0;
    *(_QWORD *)(v5 + 1088) = 0;
    *(_QWORD *)(v5 + 1096) = 0;
    *(_OWORD *)(v5 + 864) = 0;
    *(_OWORD *)(v5 + 880) = 0;
    *(_OWORD *)(v5 + 912) = 0;
    *(_OWORD *)(v5 + 944) = 0;
    *(_OWORD *)(v5 + 976) = 0;
    *(_OWORD *)(v5 + 1008) = 0;
    *(_OWORD *)(v5 + 1040) = 0;
    *(_OWORD *)(v5 + 1072) = 0;
    *(_OWORD *)(v5 + 1104) = 0;
    *(_QWORD *)(v5 + 1120) = 0;
    *(_QWORD *)(v5 + 1128) = 0;
    *(_QWORD *)(v5 + 1152) = 0;
    *(_QWORD *)(v5 + 1160) = 0;
    *(_QWORD *)(v5 + 1184) = 0;
    *(_QWORD *)(v5 + 1192) = 0;
    *(_QWORD *)(v5 + 1200) = 0;
    *(_QWORD *)(v5 + 1224) = 0;
    *(_QWORD *)(v5 + 1232) = 0;
    *(_OWORD *)(v5 + 1136) = 0;
    *(_OWORD *)(v5 + 1168) = 0;
    *(_OWORD *)(v5 + 1208) = 0;
    v8 = a2;
    sub_17F9A60(v9, "smt");
    *(_BYTE *)(v5 + 856) = sub_1859630(v8, "candidate_models", v9, 0);
    *(_BYTE *)(v5 + 857) = sub_1859610(a2, "fail_if_inconclusive", 1);
    sub_18572D0(v9);
  }
  sub_18572D0(v7);
  return v5;
}

