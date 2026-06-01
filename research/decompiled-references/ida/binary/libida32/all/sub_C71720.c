_QWORD *__fastcall sub_C71720(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 (__fastcall *v8)(__int64); // rdx
  __int64 v9; // rax
  _QWORD v10[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(unsigned __int16 *)(a2 + 4);
  if ( !*(_QWORD *)(a2 + 8 * v2 + 32) )
  {
    v4 = sub_F3F530(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v5 = (_QWORD *)sub_B73220(v4);
    v8 = *(__int64 (__fastcall **)(__int64))(*v5 + 64LL);
    if ( v8 == sub_6CEBD0 )
      v9 = sub_B5BA10(v5, v10, (__int64)v8, (__int64)sub_6CEBD0, v6, v7);
    else
      v9 = v8((__int64)v5);
    *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32) = v9;
    v2 = *(unsigned __int16 *)(a2 + 4);
  }
  a1[1] = 0;
  a1[3] = a2 + 8 * v2 + 40;
  *a1 = a2 + 32;
  a1[4] = 0;
  return a1;
}

