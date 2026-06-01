__int64 __fastcall sub_DE6720(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 v3; // rbp
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // r15
  __int64 v7; // r14
  _QWORD *v9; // [rsp+0h] [rbp-E8h]
  _QWORD *v10; // [rsp+8h] [rbp-E0h]
  __int64 v11; // [rsp+10h] [rbp-D8h]
  __int64 v12; // [rsp+18h] [rbp-D0h]
  _BYTE v13[48]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v14[48]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v15[104]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v14);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v13);
  sub_E21790(v2, 48);
  v3 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v15, (__int64)v13, 0);
  v4 = (_QWORD *)sub_D0DBD0((__int64)v15);
  sub_E232A0(v15);
  sub_CFE430((__int64)v15, (__int64)v13, 1);
  v5 = (_QWORD *)sub_D0DBD0((__int64)v15);
  sub_E232A0(v15);
  sub_CFE430((__int64)v15, (__int64)v14, 0);
  v9 = (_QWORD *)sub_D0DBD0((__int64)v15);
  sub_E232A0(v15);
  sub_CFE430((__int64)v15, (__int64)v14, 1);
  v10 = (_QWORD *)sub_D0DBD0((__int64)v15);
  sub_E232A0(v15);
  v11 = *v4 * *v9;
  v12 = *v10 * *v5;
  sub_CFE430((__int64)v15, v3, 0);
  *(_QWORD *)sub_D0DBD0((__int64)v15) = v11 - v12;
  sub_E232A0(v15);
  sub_CFE430((__int64)v15, v3, 0);
  sub_E24D00(v15);
  sub_E232A0(v15);
  v6 = *v9 * *v5;
  v7 = *v10 * *v4;
  sub_CFE430((__int64)v15, v3, 1);
  *(_QWORD *)sub_D0DBD0((__int64)v15) = v6 + v7;
  sub_E232A0(v15);
  sub_CFE430((__int64)v15, v3, 1);
  sub_E24D00(v15);
  sub_E232A0(v15);
  sub_E24D00(v3);
  sub_E232A0(v13);
  sub_E232A0(v14);
  return 1;
}
