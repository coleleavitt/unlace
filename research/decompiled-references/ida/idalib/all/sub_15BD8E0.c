void __fastcall sub_15BD8E0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rsi
  _QWORD *v3; // rax
  __int64 *v4; // rax
  __int64 *v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __m128i v11[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = *a2;
  sub_15BD5F0(v11, v2, *(_QWORD *)(*(_QWORD *)a1 + 16LL), 1u, 0, 1);
  v3 = sub_15BCE50(v11);
  v4 = sub_15BBF80(v3);
  v5 = sub_15BB620(v4);
  v6 = sub_15BB900(v5);
  sub_15B9A00((__int64)v6);
  sub_15B9900((__int64)v11, v2, v7, v8, v9, v10);
}
