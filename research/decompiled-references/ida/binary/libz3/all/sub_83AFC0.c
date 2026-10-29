void __fastcall sub_83AFC0(char *a1)
{
  void *v1; // rbp

  *(_QWORD *)a1 = &off_1C55220;
  v1 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, a1 + 24);
  sub_182CBA0(v1, a1 + 40);
  operator delete(a1, 0x48u);
}

