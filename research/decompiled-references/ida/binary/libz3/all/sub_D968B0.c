__int64 __fastcall sub_D968B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE v4[32]; // [rsp+8h] [rbp-20h] BYREF

  v2 = sub_186B270(0x30u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 16) = a1;
  *(_QWORD *)v2 = &off_1C5A810;
  sub_1858590(v2 + 24, a2);
  *(_QWORD *)(v2 + 32) = 0;
  sub_17F9A60(v4, "rewriter");
  *(double *)(v2 + 40) = (double)(int)sub_1859980(a2, "div0_ackermann_limit", v4, 1000);
  sub_18572D0(v4);
  return v2;
}

