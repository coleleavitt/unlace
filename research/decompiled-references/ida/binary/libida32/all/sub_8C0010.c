void __fastcall sub_8C0010(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_2B146F8;
  sub_8BFFB0((__int64)v2);
  operator delete(a1, 0x78u);
}

