__int64 __fastcall sub_DD7230(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // r13d
  __int64 v4; // rbp
  int v5; // r13d
  unsigned int v7; // [rsp+8h] [rbp-30h] BYREF
  int v8[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_DWORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v8[0] = v5;
  return sub_D4C2E0(a1, a2, 0x40u, v8, &v7);
}

