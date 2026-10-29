void __fastcall sub_7DFB40(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 i; // r12
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  char *v9; // rdx
  __int64 v10; // r12
  __int64 j; // rbx
  char *v12; // rax
  void *v13; // rdi
  void *v14; // rdi

  *a1 = &off_2B3BAA0;
  v2 = (char *)a1[8];
  if ( v2 )
  {
    v3 = a1[9];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 32];
        if ( v7 )
        {
          *((_QWORD *)v6 + 5) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 1);
        if ( v8 )
        {
          *((_QWORD *)v6 + 2) = 0;
          qfree(v8);
        }
        v2 = (char *)a1[8];
        v4 += 56;
      }
    }
    a1[9] = 0;
    qfree(v2);
  }
  v9 = (char *)a1[5];
  if ( v9 )
  {
    v10 = a1[6];
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
          v9 = (char *)a1[5];
        }
      }
    }
    a1[6] = 0;
    qfree(v9);
  }
  v14 = (void *)a1[2];
  if ( v14 )
  {
    a1[3] = 0;
    qfree(v14);
  }
  operator delete(a1, 0x58u);
}
