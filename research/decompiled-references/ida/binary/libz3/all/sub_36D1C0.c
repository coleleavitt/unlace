void __fastcall sub_36D1C0(__int64 a1)
{
  __int64 v1; // [rsp+0h] [rbp-28h] BYREF
  _BYTE v2[32]; // [rsp+8h] [rbp-20h] BYREF

  v1 = 0;
  sub_180C5A0(v2, "frozen");
  sub_18625B0(&v1, "phase", v2);
  sub_1862370(&v1, "restart.initial", 1000000);
  sub_1862370(&v1, "max_conflicts", *(unsigned int *)(a1 + 64));
  sub_1862370(&v1, "simplify.delay", 1000000);
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 88LL))(*(_QWORD *)(a1 + 8), &v1);
  sub_18572D0(&v1);
}

