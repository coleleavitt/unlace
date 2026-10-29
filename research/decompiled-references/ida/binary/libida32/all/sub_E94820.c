char *__fastcall sub_E94820(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(unsigned int *)(a1 + 16);
  v5[0] = a2;
  v5[1] = a3;
  return sub_E942E0((__int64)v5, (char *)(a1 + 8 * v3 + 24));
}

