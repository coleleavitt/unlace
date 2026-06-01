__int64 __fastcall sub_6A8AB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v4; // rax
  _QWORD *v5; // r14
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  _QWORD v9[8]; // [rsp+18h] [rbp-40h] BYREF

  v3 = sub_186B270(0x30u);
  *(_DWORD *)(v3 + 8) = 0;
  *(_QWORD *)v3 = &off_1C52E30;
  *(_OWORD *)(v3 + 16) = 0;
  sub_1858590(v3 + 40, a2);
  v4 = (_QWORD *)sub_186B270(0x350u);
  *v4 = a1;
  v5 = v4 + 1;
  v6 = v4;
  v9[0] = 0;
  sub_2527E0((__int64)(v4 + 1), (__int64)v9);
  sub_18572D0(v9);
  v7 = *v6;
  v9[0] = 0;
  sub_6AA910(v6 + 96, v7, v5, v9);
  sub_18572D0(v9);
  sub_15B6B30(v5, a2);
  *((_BYTE *)v6 + 73) = sub_1859610(a2, "qe_nonlinear", 0);
  sub_6AA5B0(v6 + 96, a2);
  *(_QWORD *)(v3 + 32) = v6;
  return sub_EE8D70(v3);
}

