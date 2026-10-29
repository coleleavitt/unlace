__int64 __fastcall sub_DB7C60(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  int v3; // r13d
  __int64 v4; // rax
  _QWORD savedregs[11]; // [rsp+0h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(savedregs);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v4, savedregs);
  *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v3;
  sub_E232A0(savedregs);
  return 1;
}
