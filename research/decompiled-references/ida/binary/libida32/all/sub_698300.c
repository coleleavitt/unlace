void __fastcall sub_698300(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // r12
  void *v6; // rdi
  void *v7; // rdi
  char *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 i; // r12
  char *v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[22];
    if ( v2 )
    {
      a1[23] = 0;
      qfree(v2);
    }
    v3 = (void *)a1[19];
    if ( v3 )
    {
      a1[20] = 0;
      qfree(v3);
    }
    v4 = a1[15];
    while ( v4 )
    {
      v5 = (_QWORD *)v4;
      sub_697CD0(*(_QWORD **)(v4 + 24));
      v6 = *(void **)(v4 + 40);
      v4 = *(_QWORD *)(v4 + 16);
      if ( v6 )
      {
        v5[6] = 0;
        qfree(v6);
      }
      operator delete(v5, 0x40u);
    }
    v7 = (void *)a1[9];
    if ( v7 )
    {
      a1[10] = 0;
      qfree(v7);
    }
    v8 = (char *)a1[6];
    if ( v8 )
    {
      v9 = a1[7];
      if ( v9 )
      {
        v10 = 0;
        for ( i = 0; i != v9; ++i )
        {
          v12 = &v8[v10];
          v13 = *(void **)&v8[v10 + 24];
          if ( v13 )
          {
            *((_QWORD *)v12 + 4) = 0;
            qfree(v13);
          }
          v14 = *(void **)v12;
          if ( *(_QWORD *)v12 )
          {
            *((_QWORD *)v12 + 1) = 0;
            qfree(v14);
          }
          v8 = (char *)a1[6];
          v10 += 56;
        }
      }
      a1[7] = 0;
      qfree(v8);
    }
    v15 = (void *)a1[2];
    if ( v15 )
    {
      a1[3] = 0;
      qfree(v15);
    }
    operator delete(a1, 0xC8u);
  }
}

