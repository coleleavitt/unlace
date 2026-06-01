__int64 __fastcall sub_DC21A0(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 v3; // rbp
  _DWORD *v4; // r14
  _DWORD *v5; // r15
  _DWORD *v7; // [rsp+8h] [rbp-E0h]
  _DWORD *v8; // [rsp+10h] [rbp-D8h]
  int v9; // [rsp+18h] [rbp-D0h]
  int v10; // [rsp+1Ch] [rbp-CCh]
  _BYTE v11[48]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v12[48]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v13[104]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(v12);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v11);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v13, (__int64)v11, 0);
  v4 = (_DWORD *)sub_CE96A0((__int64)v13);
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, (__int64)v11, 1);
  v5 = (_DWORD *)sub_CE96A0((__int64)v13);
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, (__int64)v12, 0);
  v7 = (_DWORD *)sub_CE96A0((__int64)v13);
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, (__int64)v12, 1);
  v8 = (_DWORD *)sub_CE96A0((__int64)v13);
  sub_DFF560(v13);
  v9 = *v4 * *v7;
  v10 = *v8 * *v5;
  sub_CDA6F0((__int64)v13, v3, 0);
  *(_DWORD *)sub_CE96A0((__int64)v13) = v9 - v10;
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, v3, 0);
  sub_E00FC0(v13);
  sub_DFF560(v13);
  LODWORD(v5) = *v7 * *v5;
  LODWORD(v4) = *v8 * *v4;
  sub_CDA6F0((__int64)v13, v3, 1);
  *(_DWORD *)sub_CE96A0((__int64)v13) = (_DWORD)v5 + (_DWORD)v4;
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, v3, 1);
  sub_E00FC0(v13);
  sub_DFF560(v13);
  sub_E00FC0(v3);
  sub_DFF560(v11);
  sub_DFF560(v12);
  return 1;
}

