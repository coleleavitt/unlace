__int64 __fastcall sub_DF6900(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D67770(a1, a2, &v8, &v7, (__int64)v9);
}
