void __fastcall sub_8AE060(char **a1)
{
  char *v1; // rdx
  char *v3; // r12
  char *i; // rbx
  char *v5; // rax
  void *v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v1[32 * (_QWORD)i];
        v6 = *((void **)v5 + 1);
        if ( v6 )
        {
          *((_QWORD *)v5 + 2) = 0;
          qfree(v6);
          v1 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    qfree(v1);
  }
}
