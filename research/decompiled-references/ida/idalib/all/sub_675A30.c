void __fastcall sub_675A30(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_2B37370;
  qregfree(v2);
  operator delete(a1, 0x30u);
}
