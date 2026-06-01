void __fastcall sub_35CC10(void *a1)
{
  void *v1; // r14
  _QWORD *v2; // r12
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  char *v6; // rdi
  __int64 v7; // r13
  __int64 i; // rbp
  char *v9; // rbx
  void *v10; // rdi
  void *v11; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_35CC10(*((void **)v1 + 3));
      v3 = *((void **)v1 + 56);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v2[57] = 0;
        qfree(v3);
      }
      v4 = (void *)v2[53];
      if ( v4 )
      {
        v2[54] = 0;
        qfree(v4);
      }
      v5 = (void *)v2[13];
      if ( v5 )
      {
        v2[14] = 0;
        qfree(v5);
      }
      v6 = (char *)v2[6];
      if ( v6 )
      {
        v7 = v2[7];
        if ( v7 )
        {
          for ( i = 0; i != v7; ++i )
          {
            v9 = &v6[144 * i];
            clear_tinfo_t(v9 + 64);
            v10 = *((void **)v9 + 5);
            if ( v10 )
            {
              *((_QWORD *)v9 + 6) = 0;
              qfree(v10);
            }
            v11 = *((void **)v9 + 2);
            if ( v11 )
            {
              *((_QWORD *)v9 + 3) = 0;
              qfree(v11);
            }
            v6 = (char *)v2[6];
          }
        }
        v2[7] = 0;
        qfree(v6);
      }
      clear_tinfo_t(v2 + 5);
      operator delete(v2, 0x1E0u);
    }
    while ( v1 );
  }
}
