void __fastcall sub_382F30(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 24;
  *((_QWORD *)v2 - 3) = &off_1C4DC18;
  sub_18572D0(v2);
  operator delete(a1, 0x20u);
}

