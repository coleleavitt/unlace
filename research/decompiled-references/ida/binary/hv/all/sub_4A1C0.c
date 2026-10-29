void __fastcall sub_4A1C0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_1619B8;
  sub_1A780((__int64)v2);
  operator delete(a1, 0x78u);
}

