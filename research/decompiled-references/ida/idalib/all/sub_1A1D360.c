__int64 __fastcall sub_1A1D360(__int64 a1, __int64 a2, unsigned __int64 a3, double a4, __m128 a5)
{
  __int64 v6; // [rsp+10h] [rbp-50h] BYREF
  _BYTE v7[72]; // [rsp+18h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  sub_1A1D150((__int64)v7, a1, (void **)a2, a3, &v6, 1, a4, a5, 0, 1, 0);
  return v7[8] ^ 1u;
}
