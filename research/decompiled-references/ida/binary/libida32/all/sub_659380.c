void __fastcall sub_659380(char **a1)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[80 * (_QWORD)i];
        v6 = *((void **)v5 + 6);
        if ( v6 )
        {
          *((_QWORD *)v5 + 7) = 0;
          qfree(v6);
        }
        v7 = *((void **)v5 + 3);
        if ( v7 )
        {
          *((_QWORD *)v5 + 4) = 0;
          qfree(v7);
        }
        v8 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v8);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}

