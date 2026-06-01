void __fastcall sub_1A510(char **a1)
{
  char *v2; // rdi
  char *v3; // rdi
  char *v4; // rdi
  char *v5; // rdi
  char *v6; // rdi
  char *v7; // r13
  char *i; // rbx
  char *v9; // rbp
  void *v10; // rdi
  void *v11; // rdi

  v2 = a1[19];
  if ( v2 )
  {
    a1[20] = nullptr;
    j__free(v2);
  }
  v3 = a1[16];
  if ( v3 )
  {
    a1[17] = nullptr;
    j__free(v3);
  }
  v4 = a1[12];
  if ( v4 )
  {
    a1[13] = nullptr;
    j__free(v4);
  }
  v5 = a1[9];
  if ( v5 )
  {
    a1[10] = nullptr;
    j__free(v5);
  }
  v6 = *a1;
  if ( *a1 )
  {
    v7 = a1[1];
    if ( v7 )
    {
      for ( i = nullptr; i != v7; ++i )
      {
        v9 = &v6[72 * (_QWORD)i];
        v10 = *((void **)v9 + 3);
        if ( v10 )
        {
          *((_QWORD *)v9 + 4) = 0;
          j__free(v10);
        }
        v11 = *(void **)v9;
        if ( *(_QWORD *)v9 )
        {
          *((_QWORD *)v9 + 1) = 0;
          j__free(v11);
        }
        v6 = *a1;
      }
    }
    a1[1] = nullptr;
    j__free(v6);
  }
}

