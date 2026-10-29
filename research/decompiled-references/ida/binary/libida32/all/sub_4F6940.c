void __fastcall sub_4F6940(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  __int64 v10; // rbx
  _QWORD *v11; // r12
  void *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  if ( a1 )
  {
    v2 = (char *)a1[17];
    if ( v2 )
    {
      v3 = a1[18];
      if ( v3 )
      {
        v4 = 0;
        for ( i = 0; i != v3; ++i )
        {
          v6 = &v2[v4];
          v7 = *(void **)&v2[v4 + 24];
          if ( v7 )
          {
            *((_QWORD *)v6 + 4) = 0;
            qfree(v7);
          }
          v8 = *(void **)v6;
          if ( *(_QWORD *)v6 )
          {
            *((_QWORD *)v6 + 1) = 0;
            qfree(v8);
          }
          v2 = (char *)a1[17];
          v4 += 56;
        }
      }
      a1[18] = 0;
      qfree(v2);
    }
    v9 = (void *)a1[14];
    if ( v9 )
    {
      a1[15] = 0;
      qfree(v9);
    }
    v10 = a1[10];
    while ( v10 )
    {
      v11 = (_QWORD *)v10;
      sub_4F5F50(*(_QWORD **)(v10 + 24));
      v12 = *(void **)(v10 + 32);
      v10 = *(_QWORD *)(v10 + 16);
      if ( v12 )
      {
        v11[5] = 0;
        qfree(v12);
      }
      operator delete(v11, 0x40u);
    }
    v13 = (void *)a1[5];
    if ( v13 )
    {
      a1[6] = 0;
      qfree(v13);
    }
    v14 = (void *)a1[2];
    if ( v14 )
    {
      a1[3] = 0;
      qfree(v14);
    }
    operator delete(a1, 0xA8u);
  }
}

