void __fastcall sub_A13BF0(const __m128i *a1, __int64 a2)
{
  __m128i v2[8]; // [rsp+0h] [rbp-88h] BYREF

  sub_9E6480(v2, a1);
  sub_9E7350((__int64)a1, a2);
  sub_9E7350(a2, (__int64)v2);
  sub_9E5FA0((__int64)v2);
}

