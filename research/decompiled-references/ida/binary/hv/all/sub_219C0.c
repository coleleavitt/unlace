void __fastcall sub_219C0(char **a1)
{
  char *v2; // rdi
  char *v3; // r14
  __int64 v4; // r12
  char *i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      v4 = 0;
      for ( i = nullptr; i != v3; ++i )
      {
        v6 = &v2[v4];
        v7 = *(void **)&v2[v4 + 72];
        if ( v7 )
        {
          *((_QWORD *)v6 + 10) = 0;
          j__free(v7);
        }
        v8 = *((void **)v6 + 6);
        if ( v8 )
        {
          *((_QWORD *)v6 + 7) = 0;
          j__free(v8);
        }
        v9 = *((void **)v6 + 3);
        if ( v9 )
        {
          *((_QWORD *)v6 + 4) = 0;
          j__free(v9);
        }
        v10 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v10);
        }
        v2 = *a1;
        v4 += 104;
      }
    }
    a1[1] = nullptr;
    j__free(v2);
  }
}

