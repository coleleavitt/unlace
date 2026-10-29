void __fastcall sub_6D1A40(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  void *v8; // rdi
  _QWORD *v9; // rbx
  _QWORD *v10; // r12
  void *v11; // rdi
  void *v12; // rdi
  __int64 v13; // rdi
  char *v14; // rdx
  __int64 v15; // r12
  __int64 j; // rbx
  char *v17; // rax
  void *v18; // rdi
  void *v19; // rdi

  *a1 = &off_2B0E020;
  v2 = (void *)a1[33];
  if ( v2 )
  {
    a1[34] = 0;
    qfree(v2);
  }
  v3 = (char *)a1[29];
  *a1 = &off_2B0DF90;
  if ( v3 )
  {
    v4 = a1[30];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[24 * i];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v7);
          v3 = (char *)a1[29];
        }
      }
    }
    a1[30] = 0;
    qfree(v3);
  }
  v8 = (void *)a1[26];
  if ( v8 )
  {
    a1[27] = 0;
    qfree(v8);
  }
  v9 = (_QWORD *)a1[22];
  v10 = &v9[a1[23]];
  if ( v9 != v10 )
  {
    do
    {
      if ( *v9 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 8LL))(*v9);
      ++v9;
    }
    while ( v10 != v9 );
    v10 = (_QWORD *)a1[22];
  }
  if ( v10 )
  {
    a1[23] = 0;
    qfree(v10);
  }
  v11 = (void *)a1[18];
  *a1 = &off_2B0DF30;
  if ( v11 )
  {
    a1[19] = 0;
    qfree(v11);
  }
  v12 = (void *)a1[15];
  *a1 = &off_2B0DE00;
  if ( v12 )
  {
    a1[16] = 0;
    qfree(v12);
  }
  v13 = a1[13];
  *a1 = &off_2B0DDE0;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = (char *)a1[10];
  a1[13] = 0;
  *a1 = &off_2B0DD40;
  if ( v14 )
  {
    v15 = a1[11];
    if ( v15 )
    {
      for ( j = 0; j != v15; ++j )
      {
        v17 = &v14[24 * j];
        v18 = *(void **)v17;
        if ( *(_QWORD *)v17 )
        {
          *((_QWORD *)v17 + 1) = 0;
          qfree(v18);
          v14 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v14);
  }
  v19 = (void *)a1[7];
  if ( v19 )
  {
    a1[8] = 0;
    qfree(v19);
  }
}

