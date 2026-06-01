void __fastcall sub_E33270(__int64 a1, __int64 a2)
{
  sub_E5E9C0(a1, a2);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 88LL))(*(_QWORD *)(a1 + 160), a2);
  *(_BYTE *)(a1 + 210) = sub_1859610(a1 + 80, "dump_benchmarks", 0);
  *(double *)(a1 + 216) = sub_1859CB0(a1 + 80, "dump_threshold", 5.0);
}

