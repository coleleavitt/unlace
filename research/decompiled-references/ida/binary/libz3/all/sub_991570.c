void __fastcall sub_991570(char *a1)
{
  void *v1; // r12
  void *v2; // r12
  void *v3; // rbp

  *(_QWORD *)a1 = &off_1C563C8;
  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 80);
  sub_182CBA0(v1, a1 + 96);
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 48);
  sub_182CBA0(v2, a1 + 64);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  sub_182CBA0(v3, a1 + 32);
  operator delete(a1, 0x78u);
}

