void __fastcall sub_4B5C40(_QWORD *a1)
{
  char *v2; // rax
  __int64 i; // r13
  char *v4; // rbp
  char *v5; // rdi
  __int64 v6; // r12
  __int64 j; // r15
  char *v8; // rbx
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi
  __int64 v14; // [rsp+8h] [rbp-40h]

  *a1 = &off_2B2CC88;
  v2 = (char *)a1[22];
  if ( v2 )
  {
    v14 = a1[23];
    if ( v14 )
    {
      for ( i = 0; i != v14; ++i )
      {
        v4 = &v2[24 * i];
        v5 = *(char **)v4;
        if ( *(_QWORD *)v4 )
        {
          v6 = *((_QWORD *)v4 + 1);
          if ( v6 )
          {
            for ( j = 0; j != v6; ++j )
            {
              v8 = &v5[96 * j];
              v9 = *((void **)v8 + 6);
              if ( v9 )
              {
                *((_QWORD *)v8 + 7) = 0;
                qfree(v9);
              }
              v10 = *((void **)v8 + 5);
              if ( v10 )
                qfree(v10);
              v5 = *(char **)v4;
            }
          }
          *((_QWORD *)v4 + 1) = 0;
          qfree(v5);
          v2 = (char *)a1[22];
        }
      }
    }
    a1[23] = 0;
    qfree(v2);
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
  operator delete(a1, 0xC8u);
}
