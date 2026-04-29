void __fastcall sub_309F40(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 136;
  *((_QWORD *)v2 - 17) = &off_4CFF70;
  clear_tinfo_t(v2);
  operator delete(a1, 0x90u);
}
