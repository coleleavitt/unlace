void __fastcall sub_15BD940(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __m128i v8[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  sub_15BD5F0(v8, v2, *(_QWORD *)(*(_QWORD *)a1 + 16LL), 1u, 0, 1);
  v3 = sub_15BC1B0(v8);
  sub_15B9A00((__int64)v3);
  sub_15B9900((__int64)v8, v2, v4, v5, v6, v7);
}
