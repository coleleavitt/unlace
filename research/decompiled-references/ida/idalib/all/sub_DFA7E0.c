__int64 __fastcall sub_DFA7E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int8 v3; // r13
  __int64 v4; // rbp
  unsigned __int8 v5; // r13
  unsigned __int8 v7; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int8 v8[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_BYTE *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v8[0] = v5;
  return sub_D6EB20(a1, a2, 0x10u, v8, &v7);
}
