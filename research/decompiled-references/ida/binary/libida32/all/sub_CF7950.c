__int64 __fastcall sub_CF7950(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbp
  __int64 v3; // rbp
  _BYTE *v4; // r15
  _BYTE *v5; // r14
  _BYTE *v7; // [rsp+8h] [rbp-E0h]
  _BYTE *v8; // [rsp+10h] [rbp-D8h]
  char v9; // [rsp+1Eh] [rbp-CAh]
  char v10; // [rsp+1Fh] [rbp-C9h]
  _BYTE v11[48]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v12[48]; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v13[104]; // [rsp+80h] [rbp-68h] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v1, 48);
  sub_DFF520(v11);
  sub_DFDA50(v1, 48);
  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v12);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v13, (__int64)v12, 0);
  v7 = (_BYTE *)sub_CE8AA0((__int64)v13);
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, (__int64)v12, 1);
  v8 = (_BYTE *)sub_CE8AA0((__int64)v13);
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, (__int64)v11, 0);
  v4 = (_BYTE *)sub_CE8AA0((__int64)v13);
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, (__int64)v11, 1);
  v5 = (_BYTE *)sub_CE8AA0((__int64)v13);
  sub_DFF560(v13);
  v9 = *v7 * *v4;
  v10 = *v8 * *v5;
  sub_CDA6F0((__int64)v13, v3, 0);
  *(_BYTE *)sub_CE8AA0((__int64)v13) = v9 - v10;
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, v3, 0);
  sub_E00FC0(v13);
  sub_DFF560(v13);
  LOBYTE(v5) = *v7 * *v5;
  LOBYTE(v4) = *v4 * *v8;
  sub_CDA6F0((__int64)v13, v3, 1);
  *(_BYTE *)sub_CE8AA0((__int64)v13) = (_BYTE)v4 + (_BYTE)v5;
  sub_DFF560(v13);
  sub_CDA6F0((__int64)v13, v3, 1);
  sub_E00FC0(v13);
  sub_DFF560(v13);
  sub_E00FC0(v3);
  sub_DFF560(v12);
  sub_DFF560(v11);
  return 1;
}

