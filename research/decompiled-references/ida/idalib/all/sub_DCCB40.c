__int64 __fastcall sub_DCCB40(__int64 a1, __int64 *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  _QWORD v5[6]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v6[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_E21760(v2, 48);
  sub_E23260(v5);
  sub_E21790(v2, 48);
  v3 = sub_DCBE90(a1, a2, (__int64)v5, 9);
  if ( (_BYTE)v3 )
  {
    sub_CFE7A0((__int64)v6, v5);
    sub_DC6920((__int64)v6);
    sub_E232A0(v6);
  }
  sub_E232A0(v5);
  return v3;
}
