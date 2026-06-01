void __fastcall sub_991190(char *a1)
{
  void *v1; // r12
  void *v2; // rbp

  v1 = qword_1C7F2C0;
  *(_QWORD *)a1 = &off_1C562C8;
  sub_182CBA0(v1, a1 + 56);
  sub_182CBA0(v1, a1 + 72);
  v2 = qword_1C7F2C0;
  *(_QWORD *)a1 = &off_1C56290;
  sub_182CBA0(v2, a1 + 16);
  sub_182CBA0(v2, a1 + 32);
  operator delete(a1, 0x60u);
}

