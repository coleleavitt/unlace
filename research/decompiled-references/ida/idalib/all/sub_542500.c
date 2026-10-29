void __fastcall sub_542500(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 32;
  *((_QWORD *)v2 - 4) = off_2B2E130;
  clear_tinfo_t(v2);
  clear_tinfo_t(a1 + 16);
  operator delete(a1, 0x28u);
}
