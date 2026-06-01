void __fastcall sub_117BA0(char *a1)
{
  char *v1; // rbx

  v1 = a1 + 152;
  *(_QWORD *)a1 = &stru_236898;
  do
  {
    if ( *(_QWORD *)v1 )
    {
      *((_QWORD *)v1 + 1) = 0;
      qfree();
    }
    v1 -= 24;
  }
  while ( v1 != a1 + 56 );
}

