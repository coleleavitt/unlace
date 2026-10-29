__int64 __fastcall sub_C08940(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _BYTE v12[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v13[64]; // [rsp+38h] [rbp-40h] BYREF

  sub_1858590(v12, a2);
  sub_1862300(v12, "arith_lhs", 1);
  sub_1862300(v12, "expand_power", 1);
  sub_1862370(v12, "max_power", 0xFFFFFFFFLL);
  sub_1862300(v12, "som", 1);
  sub_1862300(v12, "eq2ineq", 1);
  sub_1862300(v12, "elim_and", 1);
  sub_1862300(v12, "blast_distinct", 1);
  sub_1858590(v13, a2);
  sub_1862300(v13, "mul_to_power", 1);
  v2 = sub_186B270(0x30u);
  *(_DWORD *)(v2 + 8) = 0;
  v3 = v2;
  *(_QWORD *)v2 = &off_1C58070;
  v4 = (_QWORD *)sub_186B270(0xAA8u);
  *v4 = a1;
  v5 = v4;
  sub_1839FF0(v4 + 1);
  v5[76] = 0;
  v5[77] = 0;
  v5[78] = 0;
  v5[79] = 0;
  v5[80] = 0;
  v5[81] = 0;
  v5[82] = 0;
  v5[83] = 0;
  v5[84] = 0;
  v5[85] = 0;
  v5[86] = 1;
  v5[87] = 0;
  v5[88] = 0;
  v5[89] = 0;
  v5[90] = 1;
  v5[91] = 0;
  sub_181A810(v5 + 92);
  *((_DWORD *)v5 + 398) = 53;
  v5[197] = v5 + 92;
  v5[198] = 0xB00000002LL;
  sub_181A6B0(v5 + 200);
  sub_181A6B0(v5 + 204);
  sub_181AAB0(v5[197], v5 + 204, 11, 53, 1);
  sub_1808AF0(v5 + 208);
  *((_DWORD *)v5 + 604) = 53;
  v5[300] = v5 + 208;
  v5[301] = 0xB00000002LL;
  sub_1808BE0(v5 + 208, v5 + 304, 1);
  sub_1844F10(v5 + 305, 2, 1024);
  sub_1869A00(v5 + 317, 2, 1, 1024);
  sub_16669D0(v5 + 328, a1);
  *((_DWORD *)v5 + 660) = 5;
  *(_OWORD *)(v5 + 331) = 0;
  sub_16234C0(v5 + 333, a1);
  v5[339] = 0;
  sub_C09920(v5, a2);
  *(_QWORD *)(v3 + 16) = v5;
  sub_1858590(v3 + 24, a2);
  *(_OWORD *)(v3 + 32) = 0;
  v6 = sub_D156B0(a1, a2);
  v7 = sub_EE8E00(v6, v13);
  v8 = sub_D156B0(a1, a2);
  v9 = sub_EE8E00(v8, v12);
  v10 = sub_EE7AC0(v9, v7, v3);
  sub_18572D0(v13);
  sub_18572D0(v12);
  return v10;
}

