__int64 __fastcall sub_DE9890(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // rbp
  unsigned __int8 v6; // [rsp+Ah] [rbp-2Eh] BYREF
  char v7; // [rsp+Bh] [rbp-2Dh] BYREF
  int v8[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v8[0] = v3;
  LOBYTE(v3) = *(_BYTE *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = v3;
  v7 = 0;
  return sub_D3A5B0(a1, a2, &v6, v8, (__int64)&v7);
}
