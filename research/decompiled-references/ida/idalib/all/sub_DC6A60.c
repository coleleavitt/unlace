__int64 __fastcall sub_DC6A60(_QWORD *a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  __int64 v3; // rax
  _QWORD v5[6]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v6[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *a1;
  sub_E21760(*a1, 48);
  sub_E23260(v5);
  sub_E21790(v1, 48);
  v2 = *a1;
  sub_CFE7A0((__int64)v6, v5);
  v3 = sub_E216C0(v2, 48);
  sub_E23260(v3);
  sub_E232A0(v6);
  sub_E232A0(v5);
  return 1;
}
