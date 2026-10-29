void __fastcall sub_991830(char *a1)
{
  void *v1; // r12
  void *v2; // r12
  void *v3; // r12
  void *v4; // rbp

  *(_QWORD *)a1 = &off_1C56190;
  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 120);
  sub_182CBA0(v1, a1 + 136);
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 88);
  sub_182CBA0(v2, a1 + 104);
  v3 = qword_1C7F2C0;
  *(_QWORD *)a1 = &off_1C56158;
  sub_182CBA0(v3, a1 + 48);
  sub_182CBA0(v3, a1 + 64);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  sub_182CBA0(v4, a1 + 32);
  operator delete(a1, 0xA0u);
}

