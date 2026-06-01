__int64 __fastcall sub_DC29E0(__int64 a1)
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
  sub_DFDA20(v1, 48);
  sub_DFF520(v14);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v13);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v15, (__int64)v13, 0);
  v4 = (_QWORD *)sub_CE9E90((__int64)v15);
  sub_DFF560(v15);
  sub_CDA6F0((__int64)v15, (__int64)v13, 1);
  v5 = (_QWORD *)sub_CE9E90((__int64)v15);
  sub_DFF560(v15);
  sub_CDA6F0((__int64)v15, (__int64)v14, 0);
  v9 = (_QWORD *)sub_CE9E90((__int64)v15);
  sub_DFF560(v15);
  sub_CDA6F0((__int64)v15, (__int64)v14, 1);
  v10 = (_QWORD *)sub_CE9E90((__int64)v15);
  sub_DFF560(v15);
  v11 = *v4 * *v9;
  v12 = *v10 * *v5;
  sub_CDA6F0((__int64)v15, v3, 0);
  *(_QWORD *)sub_CE9E90((__int64)v15) = v11 - v12;
  sub_DFF560(v15);
  sub_CDA6F0((__int64)v15, v3, 0);
  sub_E00FC0(v15);
  sub_DFF560(v15);
  v6 = *v9 * *v5;
  v7 = *v10 * *v4;
  sub_CDA6F0((__int64)v15, v3, 1);
  *(_QWORD *)sub_CE9E90((__int64)v15) = v6 + v7;
  sub_DFF560(v15);
  sub_CDA6F0((__int64)v15, v3, 1);
  sub_E00FC0(v15);
  sub_DFF560(v15);
  sub_E00FC0(v3);
  sub_DFF560(v13);
  sub_DFF560(v14);
  return 1;
}

