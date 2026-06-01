void __fastcall sub_3EF7A0(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  char *v8; // rdx
  __int64 v9; // r12
  __int64 j; // rbx
  char *v11; // rax
  void *v12; // rdi
  void *v13; // rdi

  *a1 = &off_2B27370;
  v2 = (void *)a1[16];
  if ( v2 )
  {
    a1[17] = 0;
    qfree(v2);
  }
  v3 = (char *)a1[12];
  if ( v3 )
  {
    v4 = a1[13];
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
          v3 = (char *)a1[12];
        }
      }
    }
    a1[13] = 0;
    qfree(v3);
  }
  v8 = (char *)a1[9];
  if ( v8 )
  {
    v9 = a1[10];
    if ( v9 )
    {
      for ( j = 0; j != v9; ++j )
      {
        v11 = &v8[24 * j];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)a1[9];
        }
      }
    }
    a1[10] = 0;
    qfree(v8);
  }
  v13 = (void *)a1[3];
  if ( v13 )
  {
    a1[4] = 0;
    qfree(v13);
  }
  operator delete(a1, 0x4A0u);
}
