void __fastcall sub_608B00(_QWORD *a1)
{
  void *v2; // rdi
  __int64 v3; // rbx
  void *v4; // rdi
  char *v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  char *v8; // rax
  void *v9; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[10];
    if ( v2 )
    {
      a1[11] = 0;
      qfree(v2);
    }
    v3 = a1[6];
    while ( v3 )
    {
      sub_6068F0(*(_QWORD **)(v3 + 24));
      v4 = (void *)v3;
      v3 = *(_QWORD *)(v3 + 16);
      operator delete(v4, 0x28u);
    }
    v5 = (char *)a1[1];
    if ( v5 )
    {
      v6 = a1[2];
      if ( v6 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v8 = &v5[24 * i];
          v9 = *(void **)v8;
          if ( *(_QWORD *)v8 )
          {
            *((_QWORD *)v8 + 1) = 0;
            qfree(v9);
            v5 = (char *)a1[1];
          }
        }
      }
      a1[2] = 0;
      qfree(v5);
    }
    operator delete(a1, 0x70u);
  }
}
