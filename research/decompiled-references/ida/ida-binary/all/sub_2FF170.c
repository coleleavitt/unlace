void __fastcall sub_2FF170(void *a1, const char *a2)
{
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi

  v2 = &byte_8CD710;
  do
  {
    v3 = *((_QWORD *)v2 - 3);
    v2 -= 56;
    if ( v3 )
    {
      *((_QWORD *)v2 + 5) = 0;
      qfree(v3, a2);
    }
    v4 = *(_QWORD *)v2;
    if ( *(_QWORD *)v2 )
    {
      *((_QWORD *)v2 + 1) = 0;
      qfree(v4, a2);
    }
  }
  while ( v2 != &byte_8CD710 - 112 );
}
