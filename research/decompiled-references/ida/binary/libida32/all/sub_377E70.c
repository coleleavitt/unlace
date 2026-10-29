void __fastcall sub_377E70(char **a1)
{
  char *v2; // rdi
  char *v3; // rdi
  char *v4; // r14
  __int64 v5; // r12
  char *i; // rbp
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi

  v2 = a1[3];
  if ( v2 )
  {
    a1[4] = nullptr;
    qfree(v2);
  }
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      v5 = 0;
      for ( i = nullptr; i != v4; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 24];
        if ( v8 )
        {
          *((_QWORD *)v7 + 4) = 0;
          qfree(v8);
        }
        v9 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v9);
        }
        v3 = *a1;
        v5 += 56;
      }
    }
    a1[1] = nullptr;
    qfree(v3);
  }
}

