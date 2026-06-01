__int64 __fastcall sub_DB78F0(__int64 a1)
{
  __int64 v1; // rbp
  int v2; // r13d
  __int64 v3; // r12
  __int64 v4; // rax
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(_DWORD *)sub_E21760(v1, 8);
  sub_E21790(v1, 8);
  v3 = *(_QWORD *)(a1 + 176);
  sub_E21760(v3, 48);
  sub_E23260(v6);
  sub_E21790(v3, 48);
  *(_DWORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = v2;
  v4 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v4, v6);
  sub_E232A0(v6);
  return 1;
}
