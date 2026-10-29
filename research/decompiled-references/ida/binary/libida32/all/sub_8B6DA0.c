void __fastcall sub_8B6DA0(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  char *v7; // rdx
  __int64 v8; // r12
  __int64 j; // rbx
  char *v10; // rax
  void *v11; // rdi
  char *v12; // rdx
  __int64 v13; // r12
  __int64 k; // rbx
  char *v15; // rax
  void *v16; // rdi

  v2 = (char *)a1[8];
  *a1 = &off_2B14F08;
  if ( v2 )
  {
    v3 = a1[9];
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
          v2 = (char *)a1[8];
        }
      }
    }
    a1[9] = 0;
    qfree(v2);
  }
  v7 = (char *)a1[5];
  if ( v7 )
  {
    v8 = a1[6];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = &v7[24 * j];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v7);
  }
  v12 = (char *)a1[2];
  if ( v12 )
  {
    v13 = a1[3];
    if ( v13 )
    {
      for ( k = 0; k != v13; ++k )
      {
        v15 = &v12[24 * k];
        v16 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v16);
          v12 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree(v12);
  }
  operator delete(a1, 0x60u);
}

