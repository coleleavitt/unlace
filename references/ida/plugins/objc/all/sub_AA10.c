void __fastcall sub_AA10(char *a1)
{
  char *v1; // rbx

  v1 = a1 + 424;
  *(_QWORD *)a1 = &off_3C960;
  do
  {
    if ( *((_QWORD *)v1 + 1) )
    {
      *((_QWORD *)v1 + 2) = 0;
      qfree();
    }
    v1 -= 32;
    clear_tinfo_t();
  }
  while ( v1 != a1 - 24 );
  operator delete(a1, 0x1C8u);
}
