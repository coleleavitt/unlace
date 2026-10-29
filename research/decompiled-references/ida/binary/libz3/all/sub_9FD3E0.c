__int64 __fastcall sub_9FD3E0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void *v3; // rbp
  void *v4; // rbp
  void *v5; // rbx
  _BYTE v7[16]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-68h] BYREF
  _BYTE v9[16]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v12[40]; // [rsp+50h] [rbp-28h] BYREF

  sub_9F7AE0((__int64)v7, a3, a1[91] + 96LL * a2);
  sub_9F40B0(a1, a2, (__int64)v7);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v3, v12);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v4, v10);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v7);
  return sub_182CBA0(v5, v8);
}

