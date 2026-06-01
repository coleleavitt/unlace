__int64 __fastcall sub_DB8A60(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // rax
  _BYTE v7[48]; // [rsp+0h] [rbp-98h] BYREF
  _BYTE v8[48]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 64);
  sub_E23260(v8);
  v9 = *(_QWORD *)(v2 + 48);
  v10 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v3 = *(_QWORD *)(a1 + 176);
  sub_E21760(v3, 48);
  sub_E23260(v7);
  sub_E21790(v3, 48);
  v4 = sub_E216C0(*(_QWORD *)(a1 + 176), 64);
  sub_E231E0(v4, v8);
  *(_QWORD *)(v4 + 48) = v9;
  *(_DWORD *)(v4 + 56) = v10;
  v5 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  sub_E231E0(v5, v7);
  sub_E232A0(v7);
  sub_E232A0(v8);
  return 1;
}
