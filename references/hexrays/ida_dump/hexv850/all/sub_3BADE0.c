void __fastcall sub_3BADE0(char *a1)
{
  if ( a1 )
  {
    clear_tinfo_t(a1 + 32);
    operator delete(a1, 0x19E0u);
  }
}
