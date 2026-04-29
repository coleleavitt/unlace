void __fastcall sub_3FD720(char *a1)
{
  if ( a1 )
  {
    clear_tinfo_t(a1 + 40);
    clear_tinfo_t(a1 + 32);
    clear_tinfo_t(a1 + 24);
    clear_tinfo_t(a1 + 16);
    clear_tinfo_t(a1 + 8);
    clear_tinfo_t(a1);
    operator delete(a1, 0x40u);
  }
}
