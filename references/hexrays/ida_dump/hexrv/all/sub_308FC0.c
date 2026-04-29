void __fastcall sub_308FC0(char *a1)
{
  char *v2; // rdi

  v2 = a1 + 136;
  *((_QWORD *)v2 - 17) = &off_4B5890;
  clear_tinfo_t(v2);
  operator delete(a1, 0x90u);
}
