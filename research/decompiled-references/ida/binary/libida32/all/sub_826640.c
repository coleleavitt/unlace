void __fastcall sub_826640(_QWORD *ptr)
{
  _QWORD *v2; // rbx
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbx
  char *v12; // rax
  void *v13; // rdi
  _QWORD *v14; // rbx
  void *v15; // rdi

  v2 = (_QWORD *)ptr[32];
  *ptr = &off_2B12E10;
  if ( v2 )
  {
    delete_dirtree(*v2);
    operator delete(v2, 8u);
  }
  v3 = (char *)ptr[29];
  if ( v3 )
  {
    v4 = ptr[30];
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
          v3 = (char *)ptr[29];
        }
      }
    }
    ptr[30] = 0;
    qfree(v3);
  }
  v8 = (void *)ptr[26];
  if ( v8 )
  {
    ptr[27] = 0;
    qfree(v8);
  }
  v9 = (char *)ptr[23];
  if ( v9 )
  {
    v10 = ptr[24];
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
          v9 = (char *)ptr[23];
        }
      }
    }
    ptr[24] = 0;
    qfree(v9);
  }
  v14 = ptr + 22;
  *ptr = &unk_2BD1228;
  do
  {
    v15 = (void *)*(v14 - 3);
    v14 -= 3;
    if ( v15 )
    {
      v14[1] = 0;
      qfree(v15);
    }
  }
  while ( v14 != ptr + 10 );
  qfree(ptr);
}

