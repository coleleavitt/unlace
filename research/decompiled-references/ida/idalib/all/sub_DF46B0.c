__int64 __fastcall sub_DF46B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r13
  __int64 v4; // rbp
  char v6; // [rsp+6h] [rbp-32h] BYREF
  char v7; // [rsp+7h] [rbp-31h] BYREF
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_QWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v8[0] = v3;
  LOBYTE(v3) = *(_BYTE *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = v3;
  v7 = 0;
  return sub_D60090(a1, a2, &v6, v8, (__int64)&v7);
}
