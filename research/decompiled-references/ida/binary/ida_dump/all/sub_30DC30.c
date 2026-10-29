void __fastcall sub_30DC30(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 152;
  *((_QWORD *)v2 - 19) = off_4E2DD8;
  *((_QWORD *)v2 - 17) = &off_4E2E50;
  clear_tinfo_t();
  operator delete(a1, 0xA0u);
}
