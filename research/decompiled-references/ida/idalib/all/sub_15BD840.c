void __fastcall sub_15BD840(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i v9[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  sub_15BD5F0(v9, v2, *(_QWORD *)(*(_QWORD *)a1 + 16LL), 1u, 1, 0);
  v3 = sub_15BCE50(v9);
  v4 = sub_15BBF80(v3);
  sub_15B9A00((__int64)v4);
  sub_15B9900((__int64)v9, v2, v5, v6, v7, v8);
}
