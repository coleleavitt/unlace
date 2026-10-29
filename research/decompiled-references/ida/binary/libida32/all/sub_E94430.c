char *__fastcall sub_E94430(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v5[1] = a3;
  v3 = *(unsigned int *)(a1 + 16);
  v5[0] = a2;
  return sub_E942E0((__int64)v5, (char *)(a1 + 56 * v3 + 104));
}

