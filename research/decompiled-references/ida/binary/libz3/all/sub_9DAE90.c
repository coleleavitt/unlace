__int64 __fastcall sub_9DAE90(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void *v3; // rbx
  _BYTE v5[16]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v6[40]; // [rsp+10h] [rbp-28h] BYREF

  sub_3EBB80((__int64)v5, a3, a1[75] + 32LL * a2);
  sub_9DA920(a1, a2, (__int64)v5);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v5);
  return sub_182CBA0(v3, v6);
}

