void __fastcall sub_E3C2A0(__int64 a1, unsigned __int8 a2)
{
  double v2; // xmm0_8
  int v3; // r15d
  unsigned int v4; // r13d
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+8h] [rbp-50h] BYREF
  __int64 v9; // [rsp+10h] [rbp-48h]
  _BYTE v10[64]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a1 + 48;
  sub_17F9A60(v10, "parallel");
  v8 = 0;
  sub_1863170(&v8, a1 + 48);
  v2 = sub_1859CD0(v9, "simplify.exp", v10, 1.0);
  v3 = (int)pow(fmax(1.0, v2), (double)(*(_DWORD *)(a1 + 64) - 1));
  v4 = sub_1859980(v9, "simplify.max_conflicts", v10, 0xFFFFFFFFLL);
  if ( v4 <= (unsigned int)&loc_F423F )
  {
    v5 = *(_DWORD *)(a1 + 64);
    if ( !v5 )
      v5 = 1;
    v4 *= v5;
  }
  v6 = sub_1859980(v9, "simplify.inprocess.max", v10, 2);
  sub_1862370(&v8, "inprocess.max", (unsigned int)(v3 * v6));
  v7 = sub_1859980(v9, "simplify.restart.max", v10, 5000);
  sub_1862370(&v8, "restart.max", (unsigned int)(v3 * v7));
  sub_1862300(&v8, "lookahead_simplify", *(_DWORD *)(a1 + 64) > 2u);
  sub_1862300(&v8, "retain_blocked_clauses", a2);
  sub_1862370(&v8, "max_conflicts", v4);
  if ( *(_DWORD *)(a1 + 64) > 1u )
    sub_1862370(&v8, "bce_delay", 0);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 56) + 88LL))(*(_QWORD *)(a1 + 56), &v8);
  sub_18572D0(&v8);
  sub_18572D0(v10);
}

