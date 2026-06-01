__int64 __fastcall sub_DF6870(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  int v7; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned __int64 v8; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v9[6]; // [rsp+18h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_QWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D66F70(a1, a2, &v8, &v7, (__int64)v9);
}
