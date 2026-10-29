void __fastcall sub_8A2AD0(char **a1)
{
  char *v2; // rdi
  __int64 v3; // r15
  char *v4; // r12
  void *v5; // rdi
  char *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 i; // rbx
  char *v10; // r14
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi
  char *v15; // [rsp+8h] [rbp-50h]
  char *v17; // [rsp+18h] [rbp-40h]

  v2 = *a1;
  if ( v2 )
  {
    v17 = a1[1];
    if ( v17 )
    {
      v15 = nullptr;
      v3 = 0;
      do
      {
        v4 = &v2[v3];
        v5 = *(void **)&v2[v3 + 256];
        if ( v5 )
        {
          *((_QWORD *)v4 + 33) = 0;
          qfree(v5);
        }
        v6 = *(char **)v4;
        if ( *(_QWORD *)v4 )
        {
          v7 = *((_QWORD *)v4 + 1);
          if ( v7 )
          {
            v8 = 0;
            for ( i = 0; i != v7; ++i )
            {
              v10 = &v6[v8];
              v11 = *(void **)&v6[v8 + 88];
              if ( v11 )
              {
                *((_QWORD *)v10 + 12) = 0;
                qfree(v11);
              }
              v12 = *((void **)v10 + 7);
              if ( v12 )
              {
                *((_QWORD *)v10 + 8) = 0;
                qfree(v12);
              }
              v13 = *((void **)v10 + 4);
              if ( v13 )
              {
                *((_QWORD *)v10 + 5) = 0;
                qfree(v13);
              }
              v14 = *((void **)v10 + 1);
              if ( v14 )
              {
                *((_QWORD *)v10 + 2) = 0;
                qfree(v14);
              }
              v6 = *(char **)v4;
              v8 += 112;
            }
          }
          *((_QWORD *)v4 + 1) = 0;
          qfree(v6);
        }
        ++v15;
        v3 += 280;
        v2 = *a1;
      }
      while ( v17 != v15 );
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}
