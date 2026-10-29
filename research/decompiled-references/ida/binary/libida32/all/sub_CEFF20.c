__int64 __fastcall sub_CEFF20(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r13
  int *v3; // r14
  int v4; // ecx
  unsigned int v5; // ebx
  int v7; // ecx
  _DWORD *v8; // r15
  unsigned int v9; // [rsp+8h] [rbp-F0h]
  __int64 v10; // [rsp+10h] [rbp-E8h]
  _DWORD *v11; // [rsp+18h] [rbp-E0h]
  _DWORD *v12; // [rsp+20h] [rbp-D8h]
  _DWORD *v13; // [rsp+28h] [rbp-D0h]
  _BYTE v14[48]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v16[13]; // [rsp+90h] [rbp-68h] BYREF

  sub_CE52D0((__int64)v14, *(_QWORD *)(a1 + 176));
  sub_CE52D0((__int64)v15, *(_QWORD *)(a1 + 176));
  v10 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v16, (__int64)v15, 0);
  v11 = (_DWORD *)sub_CE96A0((__int64)v16);
  sub_DFF560(v16);
  sub_CDA6F0((__int64)v16, (__int64)v15, 1);
  v12 = (_DWORD *)sub_CE96A0((__int64)v16);
  sub_DFF560(v16);
  sub_CDA6F0((__int64)v16, (__int64)v14, 0);
  v2 = (_DWORD *)sub_CE96A0((__int64)v16);
  sub_DFF560(v16);
  sub_CDA6F0((__int64)v16, (__int64)v14, 1);
  v3 = (int *)sub_CE96A0((__int64)v16);
  sub_DFF560(v16);
  v4 = *v3;
  if ( (*v2 || v4) && (v7 = *v2 * *v2 + v4 * v4) != 0 )
  {
    v9 = v7;
    sub_CDA6F0((__int64)v16, v10, 0);
    v13 = (_DWORD *)sub_CE96A0((__int64)v16);
    sub_DFF560(v16);
    sub_CDA6F0((__int64)v16, v10, 1);
    v8 = (_DWORD *)sub_CE96A0((__int64)v16);
    sub_DFF560(v16);
    *v13 = (*v11 * *v2 + *v12 * *v3) / v9;
    sub_CDA6F0((__int64)v16, v10, 0);
    sub_E00FC0(v16);
    sub_DFF560(v16);
    *v8 = (*v12 * *v2 - *v11 * *v3) / v9;
    sub_CDA6F0((__int64)v16, v10, 1);
    sub_E00FC0(v16);
    v5 = 1;
    sub_DFF560(v16);
    sub_E00FC0(v10);
  }
  else
  {
    v16[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    v5 = 0;
    sub_E0FE60(a1, v16, 2508, 0);
  }
  sub_DFF560(v15);
  sub_DFF560(v14);
  return v5;
}

