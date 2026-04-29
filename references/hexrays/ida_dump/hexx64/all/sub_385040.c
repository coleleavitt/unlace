void __fastcall sub_385040(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 48;
  *((_QWORD *)v2 - 6) = &off_4E6B78;
  clear_tinfo_t(v2);
  clear_tinfo_t(a1 + 40);
  operator delete(a1, 0x40u);
}
