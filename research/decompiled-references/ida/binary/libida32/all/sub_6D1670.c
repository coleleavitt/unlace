void __fastcall sub_6D1670(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // r12
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rdi
  char *v13; // rdx
  __int64 v14; // r12
  __int64 j; // rbx
  char *v16; // rax
  void *v17; // rdi
  void *v18; // rdi

  v2 = (char *)a1[29];
  *a1 = &off_2B0DF90;
  if ( v2 )
  {
    v3 = a1[30];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)a1[29];
        }
      }
    }
    a1[30] = 0;
    qfree(v2);
  }
  v7 = (void *)a1[26];
  if ( v7 )
  {
    a1[27] = 0;
    qfree(v7);
  }
  v8 = (_QWORD *)a1[22];
  v9 = &v8[a1[23]];
  if ( v8 != v9 )
  {
    do
    {
      if ( *v8 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
      ++v8;
    }
    while ( v9 != v8 );
    v9 = (_QWORD *)a1[22];
  }
  if ( v9 )
  {
    a1[23] = 0;
    qfree(v9);
  }
  v10 = (void *)a1[18];
  *a1 = &off_2B0DF30;
  if ( v10 )
  {
    a1[19] = 0;
    qfree(v10);
  }
  v11 = (void *)a1[15];
  *a1 = &off_2B0DE00;
  if ( v11 )
  {
    a1[16] = 0;
    qfree(v11);
  }
  v12 = a1[13];
  *a1 = &off_2B0DDE0;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  v13 = (char *)a1[10];
  a1[13] = 0;
  *a1 = &off_2B0DD40;
  if ( v13 )
  {
    v14 = a1[11];
    if ( v14 )
    {
      for ( j = 0; j != v14; ++j )
      {
        v16 = &v13[24 * j];
        v17 = *(void **)v16;
        if ( *(_QWORD *)v16 )
        {
          *((_QWORD *)v16 + 1) = 0;
          qfree(v17);
          v13 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v13);
  }
  v18 = (void *)a1[7];
  if ( v18 )
  {
    a1[8] = 0;
    qfree(v18);
  }
}

