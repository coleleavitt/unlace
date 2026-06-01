__int64 __fastcall sub_D17AD0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v3; // eax
  unsigned int v4; // r12d
  _WORD *v6; // r13
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v7);
  sub_E21790(v2, 48);
  v3 = sub_DCC160(a1, a2, v7, 3);
  if ( (_BYTE)v3 && ((v4 = v3, (unsigned __int8)sub_E21C70(a1)) || !(unsigned __int8)sub_DC7D30(v7)) )
  {
    v6 = (_WORD *)sub_D0CDE0((__int64)v7);
    *(_WORD *)sub_E216C0(*(_QWORD *)(a1 + 176), 8) = *v6;
    *(_WORD *)sub_D0CDE0((__int64)v7) = *v6 + 1;
  }
  else
  {
    v4 = 0;
  }
  sub_E232A0(v7);
  return v4;
}
