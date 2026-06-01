void __fastcall sub_6A5370(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rax
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  __int64 v9; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  _BYTE v11[56]; // [rsp+38h] [rbp-38h] BYREF

  *(_QWORD *)a1 = &off_1C69A08;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a2;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 72) = off_1C69BF0;
  sub_11CB0C0(a1 + 96, a3, a2);
  *(_QWORD *)(a1 + 4376) = 0;
  *(_OWORD *)(a1 + 4360) = 0;
  sub_180C0A0(a1 + 4384);
  *(_QWORD *)(a1 + 4424) = a2;
  *(_QWORD *)(a1 + 4432) = a1 + 4368;
  *(_QWORD *)(a1 + 4440) = a2;
  *(_QWORD *)(a1 + 4448) = 0;
  v3 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 4456) = v3;
  *(_DWORD *)(a1 + 4472) = 0;
  *(_QWORD *)(a1 + 4464) = 8;
  *v3 = 0;
  v3[1] = 0;
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0;
  v4 = (_QWORD *)sub_186B270(0xC0u);
  *v4 = 0;
  v4[3] = 0;
  v4[6] = 0;
  v4[9] = 0;
  v4[12] = 0;
  v4[15] = 0;
  v4[18] = 0;
  v4[21] = 0;
  *(_QWORD *)(a1 + 4480) = v4;
  *(_QWORD *)(a1 + 4488) = 8;
  *(_DWORD *)(a1 + 4496) = 0;
  v5 = sub_186B270(0x80u);
  *(_QWORD *)(a1 + 4512) = 8;
  *(_QWORD *)v5 = 0;
  *(_DWORD *)(v5 + 8) = -2;
  *(_QWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 24) = -2;
  *(_QWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 40) = -2;
  *(_QWORD *)(v5 + 48) = 0;
  *(_DWORD *)(v5 + 56) = -2;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = -2;
  *(_QWORD *)(v5 + 80) = 0;
  *(_DWORD *)(v5 + 88) = -2;
  *(_QWORD *)(v5 + 96) = 0;
  *(_DWORD *)(v5 + 104) = -2;
  *(_QWORD *)(v5 + 112) = 0;
  *(_DWORD *)(v5 + 120) = -2;
  *(_QWORD *)(a1 + 4504) = v5;
  *(_DWORD *)(a1 + 4520) = 0;
  *(_OWORD *)(a1 + 4528) = 0;
  sub_786730(a1 + 4544);
  *(_DWORD *)(a1 + 4560) = 0;
  *(_QWORD *)(a1 + 4568) = a2;
  *(_QWORD *)(a1 + 4576) = 0;
  *(_QWORD *)(a1 + 4584) = a2;
  *(_QWORD *)(a1 + 4592) = 0;
  *(_QWORD *)(a1 + 4600) = a2;
  *(_QWORD *)(a1 + 4608) = 0;
  *(_QWORD *)(a1 + 4616) = a2;
  *(_QWORD *)(a1 + 4624) = 0;
  *(_QWORD *)(a1 + 4632) = a2;
  *(_QWORD *)(a1 + 4640) = 0;
  sub_16234C0(a1 + 4648, a2);
  *(_QWORD *)(a1 + 4720) = 15;
  strcpy((char *)(a1 + 4728), "no reason given");
  *(_QWORD *)(a1 + 4712) = a1 + 4728;
  *(_BYTE *)(a1 + 4744) = 0;
  *(_OWORD *)(a1 + 4696) = 0;
  sub_1863170(a1 + 4360, a3);
  v10 = a3;
  sub_17F9A60(v11, "sat");
  v6 = sub_1859630(a3, "cardinality.solver", v11, 1);
  sub_1862300(a1 + 4360, "keep_cardinality_constraints", v6);
  sub_180C5A0(&v9, "solver");
  v9 = sub_185A820(a3, "pb.solver", v11, &v9);
  sub_18625B0(a1 + 4360, "pb.solver", &v9);
  sub_11B7290(a1 + 96, a1 + 4360);
  *(_BYTE *)(a1 + 385) = 1;
  if ( (unsigned __int8)sub_1859630(v10, "smt", v11, 0) )
  {
    v7 = *(_QWORD *)(a1 + 8);
    sub_786C50(a1 + 4544, v7, a1 + 4360, a1 + 96, a1 + 4648, a1 + 4504, 1);
    sub_787220(a1 + 4544, v7);
  }
  sub_18572D0(v11);
  *(_BYTE *)(a1 + 385) = 1;
}

