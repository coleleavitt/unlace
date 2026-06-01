void __fastcall sub_5C9DC0(char **a1)
{
  char *v2; // rdi
  char *v3; // rdi
  char *v4; // r13
  char *i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

  v2 = a1[8];
  if ( v2 )
  {
    a1[9] = nullptr;
    qfree(v2);
  }
  cleanup_argloc(a1 + 5);
  clear_tinfo_t(a1 + 4);
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = nullptr; i != v4; ++i )
      {
        v6 = &v3[80 * (_QWORD)i];
        clear_tinfo_t(v6 + 64);
        v7 = *((void **)v6 + 5);
        if ( v7 )
        {
          *((_QWORD *)v6 + 6) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 2);
        if ( v8 )
        {
          *((_QWORD *)v6 + 3) = 0;
          qfree(v8);
        }
        cleanup_argloc(v6);
        v3 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v3);
  }
}

