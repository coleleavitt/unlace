void __fastcall sub_4B5AD0(_QWORD *a1)
{
  char *v1; // rax
  __int64 i; // r13
  char *v3; // rbp
  char *v4; // rdi
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 j; // r15
  char *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v15; // [rsp+8h] [rbp-40h]

  *a1 = off_2B2CCD8;
  v1 = (char *)a1[22];
  if ( v1 )
  {
    v15 = a1[23];
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v3 = &v1[24 * i];
        v4 = *(char **)v3;
        if ( *(_QWORD *)v3 )
        {
          v5 = *((_QWORD *)v3 + 1);
          if ( v5 )
          {
            v6 = 0;
            for ( j = 0; j != v5; ++j )
            {
              v8 = &v4[v6];
              v9 = *(void **)&v4[v6 + 48];
              if ( v9 )
              {
                *((_QWORD *)v8 + 7) = 0;
                qfree(v9);
              }
              v10 = *((void **)v8 + 5);
              if ( v10 )
                qfree(v10);
              v4 = *(char **)v3;
              v6 += 88;
            }
          }
          *((_QWORD *)v3 + 1) = 0;
          qfree(v4);
          v1 = (char *)a1[22];
        }
      }
    }
    a1[23] = 0;
    qfree(v1);
  }
  v11 = (void *)a1[19];
  if ( v11 )
  {
    a1[20] = 0;
    qfree(v11);
  }
  *a1 = &off_2B26160;
  merge_handler_dtr((int)a1);
  v12 = (void *)a1[12];
  if ( v12 )
  {
    a1[13] = 0;
    qfree(v12);
  }
  v13 = (void *)a1[2];
  if ( v13 )
  {
    a1[3] = 0;
    qfree(v13);
  }
}
