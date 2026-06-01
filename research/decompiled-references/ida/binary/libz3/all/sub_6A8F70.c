__int64 __fastcall sub_6A8F70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // rax
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // rsi
  _QWORD v8[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_186B270(0x30u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C52E30;
  *(_OWORD *)(v2 + 16) = 0;
  sub_1858590(v2 + 40, a1 + 40);
  v3 = (_QWORD *)sub_186B270(0x350u);
  *v3 = a2;
  v4 = v3 + 1;
  v5 = v3;
  v8[0] = 0;
  sub_2527E0((__int64)(v3 + 1), (__int64)v8);
  sub_18572D0(v8);
  v6 = *v5;
  v8[0] = 0;
  sub_6AA910(v5 + 96, v6, v4, v8);
  sub_18572D0(v8);
  sub_15B6B30(v4, a1 + 40);
  *((_BYTE *)v5 + 73) = sub_1859610(a1 + 40, "qe_nonlinear", 0);
  sub_6AA5B0(v5 + 96, a1 + 40);
  *(_QWORD *)(v2 + 32) = v5;
  return v2;
}

