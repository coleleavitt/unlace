__int64 __fastcall sub_9D85F0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void *v3; // rbp
  void *v4; // rbx
  _BYTE v6[16]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE v7[16]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v8[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  sub_992E80((__int64)v6, a3, a1[83] + ((unsigned __int64)a2 << 6));
  sub_9D7F30(a1, a2, (__int64)v6);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v8);
  sub_182CBA0(v3, v9);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v6);
  return sub_182CBA0(v4, v7);
}

