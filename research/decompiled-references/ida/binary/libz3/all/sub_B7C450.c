__int64 __fastcall sub_B7C450(__int64 *a1, int a2)
{
  int v2; // r12d
  unsigned int v3; // ebp
  void *v4; // r12
  _BYTE v6[16]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v7[56]; // [rsp+10h] [rbp-38h] BYREF

  sub_B7BFB0((__int64)v6, *a1, a2);
  v2 = sub_182DB30(v6);
  v3 = v2 + 3 * sub_182DB30(v7);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v6);
  sub_182CBA0(v4, v7);
  return v3;
}

