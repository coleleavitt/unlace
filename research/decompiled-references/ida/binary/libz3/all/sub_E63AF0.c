void __fastcall sub_E63AF0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 48;
  *((_QWORD *)v2 - 6) = &off_1C5D0C0;
  sub_14B63F0(v2);
  sub_13A2BD0(a1 + 32);
  operator delete(a1, 0x40u);
}

