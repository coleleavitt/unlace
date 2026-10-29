void __fastcall sub_43AF0(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi

  *a1 = &off_161718;
  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = a1[3];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 96];
        if ( v7 )
        {
          *((_QWORD *)v6 + 13) = 0;
          j__free(v7);
        }
        v8 = *((void **)v6 + 9);
        if ( v8 )
        {
          *((_QWORD *)v6 + 10) = 0;
          j__free(v8);
        }
        v9 = *((void **)v6 + 6);
        if ( v9 )
        {
          *((_QWORD *)v6 + 7) = 0;
          j__free(v9);
        }
        v10 = *((void **)v6 + 3);
        if ( v10 )
        {
          *((_QWORD *)v6 + 4) = 0;
          j__free(v10);
        }
        v11 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v11);
        }
        v2 = (char *)a1[2];
        v4 += 136;
      }
    }
    a1[3] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x28u);
}

