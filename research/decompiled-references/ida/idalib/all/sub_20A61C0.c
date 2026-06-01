unsigned __int64 __fastcall sub_20A61C0(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // [rsp+4h] [rbp-24h] BYREF
  int *v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  v4[0] = &v3;
  sub_206F860(v4, v1);
  sub_206F860(v4, *(_QWORD *)(a1 + 64));
  sub_206F860(v4, *(_QWORD *)(a1 + 72));
  sub_206F860(v4, *(_QWORD *)(a1 + 80));
  return sub_20A5250(
           v3,
           (__int64 *)a1,
           (__int64 *)(a1 + 8),
           (int *)(a1 + 16),
           (__int64 *)(a1 + 24),
           (__int64 *)(a1 + 48),
           (int *)(a1 + 44));
}
