void __fastcall sub_357450(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // rbx
  unsigned __int64 v4; // r12
  void *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 i; // rbx
  __int64 *v9; // rax
  __int64 v10; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[32];
    if ( v2 )
    {
      v3 = (void **)a1[37];
      v4 = a1[41] + 8LL;
      if ( (unsigned __int64)v3 < v4 )
      {
        do
        {
          v5 = *v3++;
          operator delete(v5, 0x200u);
        }
        while ( (unsigned __int64)v3 < v4 );
        v2 = (void *)a1[32];
      }
      operator delete(v2, 8LL * a1[33]);
    }
    v6 = a1[29];
    if ( v6 )
    {
      v7 = a1[30];
      if ( v7 )
      {
        for ( i = 0; i != v7; ++i )
        {
          v9 = (__int64 *)(v6 + 24 * i);
          v10 = *v9;
          if ( *v9 )
          {
            v9[1] = 0;
            qfree(v10);
            v6 = a1[29];
          }
        }
      }
      a1[30] = 0;
      qfree(v6);
    }
    sub_356690(a1 + 1);
    operator delete(a1, 0x210u);
  }
}
