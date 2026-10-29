void __fastcall sub_8D7990(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // r14
  char *v6; // rdx
  __int64 v7; // r15
  __int64 j; // rbx
  char *v9; // rax
  void *v10; // rdi
  void *v11; // rdi

  *a1 = &off_2B3E4B8;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[48 * i];
        v6 = *((char **)v5 + 3);
        if ( v6 )
        {
          v7 = *((_QWORD *)v5 + 4);
          if ( v7 )
          {
            for ( j = 0; j != v7; ++j )
            {
              v9 = &v6[24 * j];
              v10 = *(void **)v9;
              if ( *(_QWORD *)v9 )
              {
                *((_QWORD *)v9 + 1) = 0;
                qfree(v10);
                v6 = *((char **)v5 + 3);
              }
            }
          }
          *((_QWORD *)v5 + 4) = 0;
          qfree(v6);
        }
        v11 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v11);
        }
        v2 = (char *)a1[2];
      }
    }
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x28u);
}
