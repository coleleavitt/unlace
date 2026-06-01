__int64 __fastcall sub_CF0180(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  __int64 *v3; // r14
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rcx
  _QWORD *v8; // r15
  unsigned __int64 v9; // [rsp+8h] [rbp-F0h]
  __int64 v10; // [rsp+10h] [rbp-E8h]
  _QWORD *v11; // [rsp+18h] [rbp-E0h]
  _QWORD *v12; // [rsp+20h] [rbp-D8h]
  _QWORD *v13; // [rsp+28h] [rbp-D0h]
  _BYTE v14[48]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v15[48]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v16[13]; // [rsp+90h] [rbp-68h] BYREF

  sub_CE52D0((__int64)v14, *(_QWORD *)(a1 + 176));
  sub_CE52D0((__int64)v15, *(_QWORD *)(a1 + 176));
  v10 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  sub_CDA6F0((__int64)v16, (__int64)v15, 0);
  v11 = (_QWORD *)sub_CE9E90((__int64)v16);
  sub_DFF560(v16);
  sub_CDA6F0((__int64)v16, (__int64)v15, 1);
  v12 = (_QWORD *)sub_CE9E90((__int64)v16);
  sub_DFF560(v16);
  sub_CDA6F0((__int64)v16, (__int64)v14, 0);
  v2 = (_QWORD *)sub_CE9E90((__int64)v16);
  sub_DFF560(v16);
  sub_CDA6F0((__int64)v16, (__int64)v14, 1);
  v3 = (__int64 *)sub_CE9E90((__int64)v16);
  sub_DFF560(v16);
  v4 = *v3;
  if ( (*v2 || v4) && (v7 = *v2 * *v2 + v4 * v4) != 0 )
  {
    v9 = v7;
    sub_CDA6F0((__int64)v16, v10, 0);
    v13 = (_QWORD *)sub_CE9E90((__int64)v16);
    sub_DFF560(v16);
    sub_CDA6F0((__int64)v16, v10, 1);
    v8 = (_QWORD *)sub_CE9E90((__int64)v16);
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

