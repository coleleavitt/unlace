void __fastcall sub_7BB1E0(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 i; // r12
  char *v7; // rbx
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  void *v13; // rdi

  *a1 = &off_2B117A0;
  v2 = (void *)a1[16];
  if ( v2 )
  {
    a1[17] = 0;
    qfree(v2);
  }
  v3 = (char *)a1[13];
  if ( v3 )
  {
    v4 = a1[14];
    if ( v4 )
    {
      v5 = 0;
      for ( i = 0; i != v4; ++i )
      {
        v7 = &v3[v5];
        v8 = *(void **)&v3[v5 + 64];
        if ( v8 )
        {
          *((_QWORD *)v7 + 9) = 0;
          qfree(v8);
        }
        v9 = *((void **)v7 + 4);
        if ( v9 )
        {
          *((_QWORD *)v7 + 5) = 0;
          qfree(v9);
        }
        v10 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v10);
        }
        v3 = (char *)a1[13];
        v5 += 88;
      }
    }
    a1[14] = 0;
    qfree(v3);
  }
  v11 = (void *)a1[10];
  if ( v11 )
  {
    a1[11] = 0;
    qfree(v11);
  }
  v12 = (void *)a1[5];
  if ( v12 )
  {
    a1[6] = 0;
    qfree(v12);
  }
  v13 = (void *)a1[2];
  if ( v13 )
  {
    a1[3] = 0;
    qfree(v13);
  }
}

