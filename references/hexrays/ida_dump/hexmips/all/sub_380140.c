void __fastcall sub_380140(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 48;
  *((_QWORD *)v2 - 6) = &off_4C7298;
  clear_tinfo_t(v2);
  clear_tinfo_t(a1 + 40);
  operator delete(a1, 0x40u);
}
