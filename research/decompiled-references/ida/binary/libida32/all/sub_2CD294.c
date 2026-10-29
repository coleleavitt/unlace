void __fastcall sub_2CD294(char **ptr)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // r12
  char *v5; // rdi
  char *v6; // rbp
  void *v7; // rdi
  void *v8; // rdi

  v2 = ptr[3];
  if ( v2 )
  {
    ptr[4] = nullptr;
    qfree(v2);
  }
  if ( *ptr )
  {
    v3 = ptr[1];
    for ( i = nullptr; ; ++i )
    {
      v5 = *ptr;
      if ( v3 == i )
        break;
      v6 = &v5[56 * (_QWORD)i];
      v7 = *((void **)v6 + 3);
      if ( v7 )
      {
        *((_QWORD *)v6 + 4) = 0;
        qfree(v7);
      }
      v8 = *(void **)v6;
      if ( *(_QWORD *)v6 )
      {
        *((_QWORD *)v6 + 1) = 0;
        qfree(v8);
      }
    }
    ptr[1] = nullptr;
    qfree(v5);
  }
  qfree(ptr);
}

