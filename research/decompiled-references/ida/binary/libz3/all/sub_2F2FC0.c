__m128i *__fastcall sub_2F2FC0(__m128i *a1, _QWORD *a2, unsigned int a3)
{
  void *v3; // r13
  void *v4; // r13
  void *v5; // rbp
  int v7[4]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-78h] BYREF
  _BYTE v9[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v12[56]; // [rsp+50h] [rbp-38h] BYREF

  sub_2EEB30((__int64)v7, (__int64)a2, a3);
  sub_2F2920(a1, a2, v7);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v3, v12);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v4, v10);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v7);
  sub_182CBA0(v5, v8);
  return a1;
}

