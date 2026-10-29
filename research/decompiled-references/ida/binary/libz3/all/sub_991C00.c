void __fastcall sub_991C00(char *a1)
{
  void *v1; // r12
  void *v2; // r12
  void *v3; // r12
  void *v4; // r12
  void *v5; // r12
  void *v6; // rbp

  *(_QWORD *)a1 = &off_1C56400;
  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 184);
  sub_182CBA0(v1, a1 + 200);
  v2 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 152);
  sub_182CBA0(v2, a1 + 168);
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 120);
  sub_182CBA0(v3, a1 + 136);
  v4 = qword_1C7F2C0;
  *(_QWORD *)a1 = &off_1C563C8;
  sub_182CBA0(v4, a1 + 80);
  sub_182CBA0(v4, a1 + 96);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 48);
  sub_182CBA0(v5, a1 + 64);
  v6 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  sub_182CBA0(v6, a1 + 32);
  operator delete(a1, 0xE0u);
}

