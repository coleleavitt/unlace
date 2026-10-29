void __fastcall sub_539C60(char *a1)
{
  void *v1; // rbp

  *(_QWORD *)a1 = &off_1C50818;
  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 16);
  sub_182CBA0(v1, a1 + 32);
  operator delete(a1, 0x38u);
}

