__int64 __fastcall sub_DF6150(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbp
  int v5; // r13d
  char v7; // [rsp+7h] [rbp-31h] BYREF
  int v8; // [rsp+8h] [rbp-30h] BYREF
  _DWORD v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_DWORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D3AA10(a1, a2, &v8, &v7, (__int64)v9);
}
