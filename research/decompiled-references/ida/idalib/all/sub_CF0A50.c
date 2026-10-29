__int64 __fastcall sub_CF0A50(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rax
  _BYTE v7[48]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  sub_E21760(v2, 48);
  sub_E23260(v8);
  sub_E21790(v2, 48);
  v3 = *(_QWORD *)(a1 + 560);
  sub_E21760(v3, 48);
  sub_E23260(v7);
  sub_E21790(v3, 48);
  v4 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v4, v8);
  v5 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v5, v7);
  sub_E232A0(v7);
  sub_E232A0(v8);
  return 1;
}
