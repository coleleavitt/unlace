_QWORD *__fastcall sub_8C59F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 (__fastcall *v7)(__int64); // rax
  __int64 v8; // rax
  unsigned __int64 v9[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = 8LL * *(unsigned __int16 *)(a2 + 4);
  if ( !*(_QWORD *)(a2 + v3 + 32) )
  {
    v5 = sub_B0E910(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
    v6 = (_QWORD *)sub_7A3750(v5);
    v7 = *(__int64 (__fastcall **)(__int64))(*v6 + 64LL);
    if ( v7 == sub_5F7E00 )
      v8 = sub_78BC30(v6, v9);
    else
      v8 = v7((__int64)v6);
    *(_QWORD *)(a2 + 8LL * *(unsigned __int16 *)(a2 + 4) + 32) = v8;
    v3 = 8LL * *(unsigned __int16 *)(a2 + 4);
  }
  a1[1] = 0;
  *a1 = a2 + 32;
  a1[3] = a2 + v3 + 40;
  a1[4] = 0;
  return a1;
}

