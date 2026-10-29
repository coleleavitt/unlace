void __fastcall sub_8E3920(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_2B3E158;
  sub_8E3880((__int64)v2);
  operator delete(a1, 0xA0u);
}
