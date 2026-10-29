void __fastcall sub_8BFC80(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_2B15298;
  sub_8BFB40((__int64)v2);
  operator delete(a1, 0x98u);
}

