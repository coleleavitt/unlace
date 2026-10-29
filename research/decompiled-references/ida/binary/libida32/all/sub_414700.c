void __fastcall sub_414700(char **a1)
{
  char *v2; // rdi
  char *v3; // r15
  __int64 v4; // r13
  char *i; // r12
  void **v6; // rbp
  _QWORD *v7; // rbx
  void *v8; // rdi
  char *v9; // rdi
  _QWORD *v10; // rbx
  void *v11; // rdi
  char *v12; // rdi
  void *v13; // rdi
  void *v14; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = (void **)&v2[v4];
        v7 = *(_QWORD **)&v2[v4 + 120];
        while ( v7 )
        {
          v8 = v7;
          v7 = (_QWORD *)*v7;
          operator delete(v8, 0x10u);
        }
        memset(v6[13], 0, 8LL * (_QWORD)v6[14]);
        v9 = (char *)v6[13];
        v6[16] = nullptr;
        v6[15] = nullptr;
        if ( v9 != (char *)(v6 + 19) )
          operator delete(v9, 8LL * (_QWORD)v6[14]);
        v10 = v6[8];
        while ( v10 )
        {
          v11 = v10;
          v10 = (_QWORD *)*v10;
          operator delete(v11, 0x10u);
        }
        memset(v6[6], 0, 8LL * (_QWORD)v6[7]);
        v12 = (char *)v6[6];
        v6[9] = nullptr;
        v6[8] = nullptr;
        if ( v12 != (char *)(v6 + 12) )
          operator delete(v12, 8LL * (_QWORD)v6[7]);
        v13 = v6[3];
        if ( v13 )
        {
          v6[4] = nullptr;
          qfree(v13);
        }
        v14 = *v6;
        if ( *v6 )
        {
          v6[1] = nullptr;
          qfree(v14);
        }
        v2 = *a1;
        v4 += 176;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}

