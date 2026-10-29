void __fastcall sub_391030(char **a1)
{
  char *v2; // rdi
  char *v3; // r13
  char *i; // rbx
  char *v5; // rbp
  void *v6; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[40 * (_QWORD)i];
        jvalue_t_clear(v5 + 24);
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}

