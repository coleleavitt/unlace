void __fastcall sub_647EC0(_QWORD *a1)
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

  v2 = (char *)a1[72];
  *a1 = &off_2B37260;
  if ( v2 )
  {
    v3 = a1[73];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[32 * i];
        v6 = *((void **)v5 + 1);
        if ( v6 )
        {
          *((_QWORD *)v5 + 2) = 0;
          qfree(v6);
          v2 = (char *)a1[72];
        }
      }
    }
    a1[73] = 0;
    qfree(v2);
  }
  v7 = (char *)a1[69];
  if ( v7 )
  {
    v8 = a1[70];
    if ( v8 )
    {
      for ( j = 0; j != v8; ++j )
      {
        v10 = &v7[32 * j];
        v11 = *((void **)v10 + 1);
        if ( v11 )
        {
          *((_QWORD *)v10 + 2) = 0;
          qfree(v11);
          v7 = (char *)a1[69];
        }
      }
    }
    a1[70] = 0;
    qfree(v7);
  }
  operator delete(a1, 0x258u);
}
