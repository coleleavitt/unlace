void __fastcall sub_405A40(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r12
  char *i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 64];
        if ( v7 )
        {
          *((_QWORD *)v6 + 9) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 5);
        if ( v8 )
        {
          *((_QWORD *)v6 + 6) = 0;
          qfree(v8);
        }
        v9 = *((void **)v6 + 2);
        if ( v9 )
        {
          *((_QWORD *)v6 + 3) = 0;
          qfree(v9);
        }
        v2 = *a1;
        v4 += 88;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}
