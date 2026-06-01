void __fastcall sub_8260B0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbp
  char *v6; // rax
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbp
  char *v12; // rax
  void *v13; // rdi
  _QWORD *v14; // rbp
  _QWORD *v15; // rbx
  void *v16; // rdi

  v1 = (_QWORD *)a1[32];
  *a1 = &off_2B12E10;
  if ( v1 )
  {
    delete_dirtree(*v1);
    operator delete(v1, 8u);
  }
  v3 = (char *)a1[29];
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
  v9 = (char *)a1[23];
  if ( v9 )
  {
    v10 = a1[24];
    if ( v10 )
    {
      for ( j = 0; j != v10; ++j )
      {
        v12 = &v9[24 * j];
        v13 = *(void **)v12;
        if ( *(_QWORD *)v12 )
        {
          *((_QWORD *)v12 + 1) = 0;
          qfree(v13);
          v9 = (char *)a1[23];
        }
      }
    }
    a1[24] = 0;
    qfree(v9);
  }
  v14 = a1 + 22;
  v15 = a1 + 10;
  *(v15 - 10) = &unk_2BD1228;
  do
  {
    v16 = (void *)*(v14 - 3);
    v14 -= 3;
    if ( v16 )
    {
      v14[1] = 0;
      qfree(v16);
    }
  }
  while ( v15 != v14 );
}

