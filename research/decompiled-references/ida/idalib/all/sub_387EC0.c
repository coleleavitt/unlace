void __fastcall sub_387EC0(_QWORD *a1, char a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  const char *v5; // rdi
  char *v6; // rdx
  __int64 v7; // rbp
  __int64 i; // rbx
  char *v9; // rax
  void *v10; // rdi

  v3 = a1[13];
  v4 = v3 + 24LL * a1[14];
  while ( v4 != v3 )
  {
    v5 = haystack;
    if ( *(_QWORD *)(v3 + 8) )
      v5 = *(const char **)v3;
    v3 += 24;
    process_config_directive(v5, 2);
  }
  if ( a2 )
  {
    v6 = (char *)a1[13];
    if ( v6 )
    {
      v7 = a1[14];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = &v6[24 * i];
          v10 = *(void **)v9;
          if ( *(_QWORD *)v9 )
          {
            *((_QWORD *)v9 + 1) = 0;
            qfree(v10);
            v6 = (char *)a1[13];
          }
        }
      }
      a1[14] = 0;
      qfree(v6);
      a1[13] = 0;
      a1[15] = 0;
    }
  }
}
