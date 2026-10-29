void __fastcall sub_3FFD00(__int64 a1)
{
  __int64 v1; // rax
  bool v2; // zf
  unsigned int v3; // eax
  unsigned __int8 v4; // al
  double v5; // xmm0_8
  unsigned __int8 v6; // al
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 152);
  v2 = *(_BYTE *)(a1 + 661) == 0;
  v7[0] = 0;
  *(_DWORD *)(v1 + 712) = 1;
  if ( v2 )
  {
    sub_1862370(v7, "arith.propagation_mode", 0);
    sub_1862300(v7, "arith.auto_config_simplex", 1);
    sub_1862300(v7, "arith.propagate_eqs", 0);
    sub_1862300(v7, "arith.eager_eq_axioms", 0);
  }
  v3 = sub_1859980(**(_QWORD **)(a1 + 144), "spacer.random_seed", *(_QWORD *)(a1 + 144) + 8LL, 0);
  sub_1862370(v7, "random_seed", v3);
  sub_1862300(v7, "clause_proof", 0);
  v4 = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.dump_benchmarks", *(_QWORD *)(a1 + 144) + 8LL, 0);
  sub_1862300(v7, "dump_benchmarks", v4);
  v5 = sub_1859CD0(**(_QWORD **)(a1 + 144), "spacer.dump_threshold", *(_QWORD *)(a1 + 144) + 8LL, 5.0);
  sub_18623E0(v7, "dump_threshold", v5);
  v6 = sub_1859630(**(_QWORD **)(a1 + 144), "spacer.mbqi", *(_QWORD *)(a1 + 144) + 8LL, 1);
  sub_1862300(v7, "mbqi", v6);
  if ( !*(_BYTE *)(a1 + 662) )
  {
    sub_1862370(v7, "phase_selection", 4);
    sub_1862370(v7, "restart_strategy", 0);
    sub_18623E0(v7, "restart_factor", 1.5);
    sub_1862370(v7, "qi.quick_checker", 1);
    sub_18623E0(v7, "qi.eager_threshold", 10.0);
    sub_18623E0(v7, "qi.lazy_threshold", 20.0);
  }
  sub_E31C60(*(_QWORD *)(a1 + 232), v7);
  sub_E31C60(*(_QWORD *)(a1 + 240), v7);
  sub_E31C60(*(_QWORD *)(a1 + 248), v7);
  sub_18572D0(v7);
}

