void __fastcall sub_717FA0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD v5[8]; // [rsp+10h] [rbp-40h] BYREF

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &off_1C536C0;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v5[0] = 0;
  sub_6EF8C0((_QWORD *)(a1 + 56), a2, (__int64)v5);
  sub_18572D0(v5);
  *(_QWORD *)(a1 + 64) = a2;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = a2;
  sub_1862300(a1 + 72, "model", 1);
  sub_1862370(a1 + 72, "relevancy", 0);
  sub_1862370(a1 + 72, "case_split_strategy", 2);
  *(_QWORD *)(a1 + 104) = a2;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  sub_1862300(a1 + 112, "model", 1);
  sub_1862370(a1 + 112, "relevancy", 0);
  sub_1862370(a1 + 112, "case_split_strategy", 2);
  sub_713400(a1 + 144, a2);
  *(_QWORD *)(a1 + 360) = a2;
  *(_QWORD *)(a1 + 368) = 0;
  *(_QWORD *)(a1 + 376) = a2;
  *(_QWORD *)(a1 + 384) = 0;
  *(_QWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 416) = a4;
  *(_QWORD *)(a1 + 424) = a2;
  *(_QWORD *)(a1 + 432) = 0;
  *(_QWORD *)(a1 + 440) = a2;
  *(_QWORD *)(a1 + 448) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_BYTE *)(a1 + 472) = 0;
  *(_QWORD *)(a1 + 496) = a2;
  *(_QWORD *)(a1 + 504) = 0;
  *(_QWORD *)(a1 + 512) = 0;
  *(_QWORD *)(a1 + 520) = 1;
  *(_QWORD *)(a1 + 528) = 0;
  *(_QWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 552) = 1;
  *(_QWORD *)(a1 + 560) = 0;
  *(_QWORD *)(a1 + 568) = 0;
  *(_QWORD *)(a1 + 576) = 0;
  *(_QWORD *)(a1 + 584) = 1;
  *(_QWORD *)(a1 + 592) = 0;
  *(_OWORD *)(a1 + 480) = 0;
  v5[0] = 0;
  sub_1862300(v5, "use_qel", 0);
  sub_6EF700((_QWORD *)(a1 + 56), (__int64)v5);
  sub_18572D0(v5);
}

