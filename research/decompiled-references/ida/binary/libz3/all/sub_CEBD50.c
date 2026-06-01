void __fastcall sub_CEBD50(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 16;
  *((_QWORD *)v2 - 2) = &off_1C59BC0;
  sub_18572D0(v2);
  operator delete(a1, 0x20u);
}

