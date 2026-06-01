void __fastcall sub_2CE73E(char **ptr)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // r12
  char *v5; // rdi
  char *v6; // rbp
  void *v7; // rdi
  void *v8; // rdi

  v2 = ptr[8];
  if ( v2 )
  {
    ptr[9] = nullptr;
    qfree(v2);
  }
  cleanup_argloc(ptr + 5);
  clear_tinfo_t(ptr + 4);
  if ( *ptr )
  {
    v3 = ptr[1];
    for ( i = nullptr; ; ++i )
    {
      v5 = *ptr;
      if ( v3 == i )
        break;
      v6 = &v5[80 * (_QWORD)i];
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
    }
    ptr[1] = nullptr;
    qfree(v5);
  }
  qfree(ptr);
}

