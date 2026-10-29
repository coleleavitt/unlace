void __fastcall sub_3DCEE0(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  __int64 v7; // rbx
  void *v8; // rdi

  if ( a1 )
  {
    v2 = (char *)a1[6];
    if ( v2 )
    {
      v3 = a1[7];
      if ( v3 )
      {
        for ( i = 0; i != v3; ++i )
        {
          v5 = &v2[32 * i];
          v6 = *(void **)v5;
          if ( *(_QWORD *)v5 )
          {
            *((_QWORD *)v5 + 1) = 0;
            qfree(v6);
            v2 = (char *)a1[6];
          }
        }
      }
      a1[7] = 0;
      qfree(v2);
    }
    v7 = a1[2];
    while ( v7 )
    {
      sub_3DC040(*(_QWORD **)(v7 + 24));
      v8 = (void *)v7;
      v7 = *(_QWORD *)(v7 + 16);
      operator delete(v8, 0x30u);
    }
    operator delete(a1, 0x50u);
  }
}
