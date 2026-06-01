void __fastcall sub_8FEBC0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 32;
  *((_QWORD *)v2 - 4) = &off_1C6F4F8;
  sub_E66770(v2);
  operator delete(a1, 0x28u);
}

