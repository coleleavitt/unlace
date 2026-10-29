void __fastcall sub_A39090(const __m128i *a1, __int64 a2)
{
  __m128i v2[8]; // [rsp+0h] [rbp-88h] BYREF

  sub_A0A1C0(v2, a1);
  sub_A0B090((__int64)a1, a2);
  sub_A0B090(a2, (__int64)v2);
  sub_A09CE0((__int64)v2);
}
