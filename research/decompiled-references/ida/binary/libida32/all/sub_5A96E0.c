void __fastcall sub_5A96E0(void **a1)
{
  void **v2; // rbx
  void *v3; // rdi

  v2 = a1 + 15;
  *a1 = off_2B05AC8;
  do
  {
    v3 = *v2;
    if ( *v2 )
    {
      v2[1] = nullptr;
      qfree(v3);
    }
    v2 -= 5;
  }
  while ( v2 != a1 );
}

