__int64 __fastcall sub_DE56A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 v3; // rbp
  _WORD *v4; // r14
  _WORD *v5; // r15
  _WORD *v7; // [rsp+8h] [rbp-E0h]
  _WORD *v8; // [rsp+10h] [rbp-D8h]
  __int16 v9; // [rsp+1Ch] [rbp-CCh]
  __int16 v10; // [rsp+1Eh] [rbp-CAh]
  _BYTE v11[48]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v12[48]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v13[104]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_E21760(v1, 48);
  sub_E23260(v12);
  sub_E21790(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v11);
  sub_E21790(v2, 48);
  v3 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  sub_CFE430((__int64)v13, (__int64)v11, 0);
  v4 = (_WORD *)sub_D0CDE0((__int64)v13);
  sub_E232A0(v13);
  sub_CFE430((__int64)v13, (__int64)v11, 1);
  v5 = (_WORD *)sub_D0CDE0((__int64)v13);
  sub_E232A0(v13);
  sub_CFE430((__int64)v13, (__int64)v12, 0);
  v7 = (_WORD *)sub_D0CDE0((__int64)v13);
  sub_E232A0(v13);
  sub_CFE430((__int64)v13, (__int64)v12, 1);
  v8 = (_WORD *)sub_D0CDE0((__int64)v13);
  sub_E232A0(v13);
  v9 = *v4 * *v7;
  v10 = *v8 * *v5;
  sub_CFE430((__int64)v13, v3, 0);
  *(_WORD *)sub_D0CDE0((__int64)v13) = v9 - v10;
  sub_E232A0(v13);
  sub_CFE430((__int64)v13, v3, 0);
  sub_E24D00(v13);
  sub_E232A0(v13);
  LOWORD(v5) = *v7 * *v5;
  LOWORD(v4) = *v8 * *v4;
  sub_CFE430((__int64)v13, v3, 1);
  *(_WORD *)sub_D0CDE0((__int64)v13) = (_WORD)v5 + (_WORD)v4;
  sub_E232A0(v13);
  sub_CFE430((__int64)v13, v3, 1);
  sub_E24D00(v13);
  sub_E232A0(v13);
  sub_E24D00(v3);
  sub_E232A0(v11);
  sub_E232A0(v12);
  return 1;
}
