void __fastcall sub_77E40(void *a1)
{
  __int128 *v1; // rbx
  __int128 *v2; // rax

  v1 = &xmmword_AB250;
  do
  {
    clear_tinfo_t();
    v2 = v1;
    v1 = (__int128 *)((char *)v1 - 40);
  }
  while ( v2 != &xmmword_AB250 - 185 );
}
