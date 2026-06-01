__int64 __fastcall sub_DC7320(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // rax
  _BYTE v10[48]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 176);
  v2 = sub_E21760(v1, 64);
  sub_E23260(v10);
  v11 = *(_QWORD *)(v2 + 48);
  v12 = *(_DWORD *)(v2 + 56);
  sub_E21790(v1, 64);
  v7 = sub_CE9650(*(_QWORD *)(a1 + 184), v11, v3, v4, v5, v6);
  v8 = sub_E216C0(*(_QWORD *)(a1 + 176), 48);
  *(_QWORD *)(v8 + 32) = v7;
  *(_QWORD *)v8 = 0;
  *(_DWORD *)(v8 + 24) = 2;
  *(_OWORD *)(v8 + 8) = 0;
  sub_E232A0(v10);
  return 1;
}
