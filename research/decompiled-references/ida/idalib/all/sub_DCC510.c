__int64 __fastcall sub_DCC510(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  __int64 v3; // r14
  unsigned int v4; // r12d
  _BYTE v6[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v6);
  sub_E21790(v2, 48);
  v3 = sub_E21760(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DCC160(a1, a2, (__int64)v6, 0);
  if ( (_BYTE)v4 )
    v4 = sub_DA9B10(a1, (__int64)a2, (__int64)v6, v3);
  sub_E232A0(v6);
  return v4;
}
