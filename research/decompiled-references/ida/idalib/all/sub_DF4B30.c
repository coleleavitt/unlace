__int64 __fastcall sub_DF4B30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int16 v3; // r13
  __int64 v4; // rbp
  __int16 v5; // r13
  __int16 v7; // [rsp+Ah] [rbp-2Eh] BYREF
  __int16 v8; // [rsp+Ch] [rbp-2Ch] BYREF
  _WORD v9[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_WORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D616B0(a1, a2, &v8, &v7, (__int64)v9);
}
