void __fastcall sub_4BEC90(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r12
  char *i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

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
        v7 = *(void **)&v2[v4 + 48];
        if ( v7 )
        {
          *((_QWORD *)v6 + 7) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 5);
        if ( v8 )
          qfree(v8);
        v2 = *a1;
        v4 += 88;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}
