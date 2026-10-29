__int64 __fastcall sub_CF0FA0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  __int16 v3; // r13
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 560);
  *(_QWORD *)(a1 + 1240) = *a2;
  v3 = *(_WORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 560);
  sub_E21760(v4, 48);
  sub_E23260(v7);
  sub_E21790(v4, 48);
  *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 560), 8) = v3;
  v5 = sub_E216C0(*(_QWORD *)(a1 + 560), 48);
  sub_E231E0(v5, v7);
  sub_E232A0(v7);
  return 1;
}
