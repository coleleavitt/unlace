void __fastcall sub_7BB920(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  char *v4; // rbx
  char *v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 i; // r15
  char *v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  char *v12; // rdx
  __int64 v13; // r15
  __int64 j; // rbp
  char *v15; // rax
  void *v16; // rdi
  void *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+18h] [rbp-40h]

  *a1 = off_2B11B60;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v20 = a1[3];
    if ( v20 )
    {
      v18 = 0;
      v3 = 0;
      do
      {
        v4 = &v2[v3];
        v5 = *(char **)&v2[v3 + 48];
        if ( v5 )
        {
          v6 = *((_QWORD *)v4 + 7);
          if ( v6 )
          {
            v7 = 0;
            for ( i = 0; i != v6; ++i )
            {
              v9 = &v5[v7];
              v10 = *(void **)&v5[v7 + 32];
              if ( v10 )
              {
                *((_QWORD *)v9 + 5) = 0;
                qfree(v10);
              }
              v11 = *((void **)v9 + 1);
              if ( v11 )
              {
                *((_QWORD *)v9 + 2) = 0;
                qfree(v11);
              }
              v5 = *((char **)v4 + 6);
              v7 += 56;
            }
          }
          *((_QWORD *)v4 + 7) = 0;
          qfree(v5);
        }
        v12 = *((char **)v4 + 3);
        if ( v12 )
        {
          v13 = *((_QWORD *)v4 + 4);
          if ( v13 )
          {
            for ( j = 0; j != v13; ++j )
            {
              v15 = &v12[24 * j];
              v16 = *(void **)v15;
              if ( *(_QWORD *)v15 )
              {
                *((_QWORD *)v15 + 1) = 0;
                qfree(v16);
                v12 = *((char **)v4 + 3);
              }
            }
          }
          *((_QWORD *)v4 + 4) = 0;
          qfree(v12);
        }
        v17 = *(void **)v4;
        if ( *(_QWORD *)v4 )
        {
          *((_QWORD *)v4 + 1) = 0;
          qfree(v17);
        }
        ++v18;
        v3 += 104;
        v2 = (char *)a1[2];
      }
      while ( v20 != v18 );
    }
    a1[3] = 0;
    qfree(v2);
  }
}

