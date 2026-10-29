__int64 __fastcall sub_DD0210(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbp
  char v5; // r13
  char v7; // [rsp+Dh] [rbp-2Bh] BYREF
  char v8; // [rsp+Eh] [rbp-2Ah] BYREF
  _BYTE v9[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D3A480(a1, a2, &v8, &v7, (__int64)v9);
}

