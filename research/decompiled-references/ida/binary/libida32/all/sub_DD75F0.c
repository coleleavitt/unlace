__int64 __fastcall sub_DD75F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  void *v3; // r13
  __int64 v4; // rbp
  __int64 v5; // r13
  void *v7; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(void **)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_QWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v8[0] = v5;
  return sub_D4CFC0(a1, a2, 0x80u, v8, &v7);
}

