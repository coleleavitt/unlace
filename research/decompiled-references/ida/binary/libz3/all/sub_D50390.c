__int64 __fastcall sub_D50390(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  void *v3; // rbp
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v7[7]; // [rsp+10h] [rbp-38h] BYREF

  v6[0] = 1;
  v6[1] = 0;
  v7[0] = 1;
  v7[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v7);
  BYTE4(v7[0]) &= ~1u;
  LODWORD(v7[0]) = 1;
  v2 = sub_1674520(a1, v6, a2);
  v3 = qword_1C7F2C0;
  v4 = v2;
  sub_182CBA0(qword_1C7F2C0, v6);
  sub_182CBA0(v3, v7);
  return v4;
}

