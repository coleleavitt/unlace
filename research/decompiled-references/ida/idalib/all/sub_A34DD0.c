void __fastcall sub_A34DD0(__int64 a1, __int64 a2)
{
  _BYTE v2[176]; // [rsp+0h] [rbp-158h] BYREF
  char v3; // [rsp+B0h] [rbp-A8h]
  __m128i v4[10]; // [rsp+B8h] [rbp-A0h] BYREF

  sub_A0A250((__int64)v2, a1);
  v3 = *(_BYTE *)(a1 + 176) & 3 | v3 & 0xFC;
  sub_A20FC0(v4, (const __m128i *)(a1 + 184));
  sub_A2D550(a1, a2);
  sub_A2D550(a2, (__int64)v2);
  sub_A1FD80((__int64)v2);
}
