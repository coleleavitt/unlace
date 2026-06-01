__int64 __fastcall sub_DCC880(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebp
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v4 = *(_QWORD *)(a1 + 176);
  sub_E21760(v4, 48);
  sub_E23260(v7);
  sub_E21790(v4, 48);
  v5 = sub_DC9180(a1, a2, (__int64)v7, a3);
  sub_E232A0(v7);
  return v5;
}
