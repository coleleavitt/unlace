__int64 __fastcall sub_DF4E70(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // rbp
  __int16 v6; // [rsp+8h] [rbp-30h] BYREF
  __int16 v7; // [rsp+Ah] [rbp-2Eh] BYREF
  int v8[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_E21760(v2, 8);
  sub_E21790(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v8[0] = v3;
  LOWORD(v3) = *(_WORD *)sub_E21760(v4, 8);
  sub_E21790(v4, 8);
  v6 = v3;
  v7 = 0;
  return sub_D61F90(a1, a2, &v6, v8, (__int64)&v7);
}
