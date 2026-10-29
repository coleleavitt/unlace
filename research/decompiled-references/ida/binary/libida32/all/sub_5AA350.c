void __fastcall sub_5AA350(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi

  *a1 = &off_2B059F0;
  v2 = (char *)a1[8];
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 32];
        if ( v7 )
        {
          *((_QWORD *)v6 + 5) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 1);
        if ( v8 )
        {
          *((_QWORD *)v6 + 2) = 0;
          qfree(v8);
        }
        v2 = (char *)a1[8];
        v4 += 56;
      }
    }
    a1[9] = 0;
    qfree(v2);
  }
  v9 = (void *)a1[2];
  if ( v9 )
  {
    a1[3] = 0;
    qfree(v9);
  }
}

