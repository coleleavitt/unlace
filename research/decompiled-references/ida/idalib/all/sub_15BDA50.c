void __fastcall sub_15BDA50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __m128i v7[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  sub_15BD5F0(v7, v2, *(_QWORD *)(*(_QWORD *)a1 + 16LL), 0, 0, 1);
  sub_15B9A00((__int64)v7);
  sub_15B9900((__int64)v7, v2, v3, v4, v5, v6);
}
