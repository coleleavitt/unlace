void __fastcall sub_349C20(__int64 a1, __int64 a2)
{
  char v3; // al
  _QWORD *v4; // rdi
  __int64 (*v5)(void); // rax
  __int64 v6; // rax
  unsigned int v7; // eax
  _BYTE v8[32]; // [rsp+8h] [rbp-20h] BYREF

  sub_2FF6A0(a1, a2);
  sub_17F9A60(v8, "opt");
  *(_BYTE *)(a1 + 533) = sub_1859630(a2, "maxres.hill_climb", v8, 1);
  *(_BYTE *)(a1 + 534) = sub_1859630(a2, "maxres.add_upper_bound_block", v8, 0);
  *(_DWORD *)(a1 + 536) = sub_1859980(a2, "maxres.max_core_size", v8, 3);
  *(_BYTE *)(a1 + 540) = sub_1859630(a2, "maxres.maximize_assignment", v8, 0);
  *(_DWORD *)(a1 + 544) = sub_1859980(a2, "maxres.max_correction_set_size", v8, 3);
  *(_BYTE *)(a1 + 549) = sub_1859630(a2, "maxres.pivot_on_correction_set", v8, 1);
  *(_BYTE *)(a1 + 548) = sub_1859630(a2, "maxres.wmax", v8, 0);
  *(_BYTE *)(a1 + 550) = sub_1859630(a2, "dump_benchmarks", v8, 0);
  *(_BYTE *)(a1 + 551) = sub_1859630(a2, "enable_lns", v8, 0);
  *(_BYTE *)(a1 + 556) = sub_1859630(a2, "enable_core_rotate", v8, 0);
  *(_DWORD *)(a1 + 552) = sub_1859980(a2, "lns_conflicts", v8, 1000);
  v3 = sub_1859630(a2, "rc2.totalizer", v8, 1);
  v4 = *(_QWORD **)(a1 + 16);
  *(_BYTE *)(a1 + 557) = v3;
  v5 = *(__int64 (**)(void))(*v4 + 88LL);
  if ( (char *)v5 == (char *)sub_2A5F70 )
  {
    v6 = v4[64];
    if ( !v6 )
      goto LABEL_6;
    v7 = *(_DWORD *)(v6 - 4);
  }
  else
  {
    v7 = v5();
  }
  if ( v7 > 1 )
    *(_BYTE *)(a1 + 534) = 0;
LABEL_6:
  sub_18572D0(v8);
}

