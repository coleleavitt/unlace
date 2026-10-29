void __fastcall sub_3B2670(char **a1)
{
  char *v1; // rdx
  char *v3; // r13
  __int64 v4; // rbp
  char *i; // rbx
  void *v6; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = *(void **)&v1[v4 + 8];
        if ( v6 )
        {
          *(_QWORD *)&v1[v4 + 16] = 0;
          qfree(v6);
          v1 = *a1;
        }
        v4 += 56;
      }
    }
    a1[1] = nullptr;
    qfree(v1);
  }
}
