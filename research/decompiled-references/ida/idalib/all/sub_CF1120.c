__int64 __fastcall sub_CF1120(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_E21760(v2, 48);
  sub_E23260(savedregs);
  sub_E21790(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  v4 = *(_QWORD *)sub_E21760(v3, 8);
  sub_E21790(v3, 8);
  v5 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v5, savedregs);
  *(_QWORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v4;
  sub_E232A0(savedregs);
  return 1;
}
