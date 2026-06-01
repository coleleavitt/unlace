__int64 __fastcall sub_DD03F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int16 v3; // r13
  __int64 v4; // rbp
  char v6; // [rsp+Ch] [rbp-2Ch] BYREF
  char v7; // [rsp+Dh] [rbp-2Bh] BYREF
  __int16 v8[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v8[0] = v3;
  LOBYTE(v3) = *(_BYTE *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v6 = v3;
  v7 = 0;
  return sub_D3B060(a1, a2, &v6, v8, (__int64)&v7);
}

