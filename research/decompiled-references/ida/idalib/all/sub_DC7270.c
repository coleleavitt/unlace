__int64 __fastcall sub_DC7270(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v5; // rax
  _DWORD v6[12]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v7[72]; // [rsp+30h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v6);
  sub_E21790(v1, 48);
  if ( v6[6] )
  {
    v5 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
    sub_E231E0(v5, v6);
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 176);
    sub_CFE160((__int64)v7, (__int64)v6);
    v3 = sub_E216C0(v2, 48);
    sub_E23260(v3);
    sub_E232A0(v7);
  }
  sub_E232A0(v6);
  return 1;
}
