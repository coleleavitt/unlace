_QWORD *__fastcall sub_6E070(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx

  *a1 = -4294967291LL;
  a1[1] = 0;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, (const char *)a2);
  v5 = (_QWORD *)hexdsp(129, 16);
  v6 = *(_QWORD *)(a2 + 136);
  *v5 = a2;
  v5[1] = v6 - a3;
  a1[1] = v5;
  return a1;
}
