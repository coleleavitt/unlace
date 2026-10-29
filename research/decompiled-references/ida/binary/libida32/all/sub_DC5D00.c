__int64 __fastcall sub_DC5D00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // rbp
  unsigned __int16 v5; // r13
  char v7; // [rsp+Bh] [rbp-2Dh] BYREF
  unsigned __int16 v8; // [rsp+Ch] [rbp-2Ch] BYREF
  _WORD v9[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_BYTE *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_WORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D45B50(a1, a2, &v8, &v7, (__int64)v9);
}

