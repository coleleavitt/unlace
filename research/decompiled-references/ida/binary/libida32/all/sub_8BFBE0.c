void __fastcall sub_8BFBE0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_2B141B8;
  sub_8BFB40((__int64)v2);
  operator delete(a1, 0xA0u);
}

