__int64 __fastcall sub_DB3A10(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r13
  __int64 v3; // rax
  __int64 v4; // rax
  _BYTE v6[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v7[88]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v7);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v6);
  sub_E21790(v2, 48);
  v3 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v3, v7);
  v4 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v4, v6);
  sub_E232A0(v6);
  sub_E232A0(v7);
  return 1;
}
