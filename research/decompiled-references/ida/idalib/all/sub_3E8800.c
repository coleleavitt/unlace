void __fastcall sub_3E8800(char **a1)
{
  char *v2; // rbx
  char *v3; // r12
  void *v4; // rdi
  char *v5; // rdi
  char *v6; // rbx
  char *v7; // r12
  void *v8; // rdi
  char *v9; // rdx
  char *v10; // r12
  char *i; // rbx
  char *v12; // rax
  void *v13; // rdi

  if ( a1 )
  {
    v2 = a1[19];
    while ( v2 )
    {
      v3 = v2;
      sub_3E7D00(*((_QWORD **)v2 + 3));
      v4 = *((void **)v2 + 4);
      v2 = *((char **)v2 + 2);
      if ( v4 )
      {
        *((_QWORD *)v3 + 5) = 0;
        qfree(v4);
      }
      operator delete(v3, 0x40u);
    }
    v5 = a1[14];
    if ( v5 )
    {
      a1[15] = nullptr;
      qfree(v5);
    }
    v6 = a1[5];
    while ( v6 )
    {
      v7 = v6;
      sub_3E7D00(*((_QWORD **)v6 + 3));
      v8 = *((void **)v6 + 4);
      v6 = *((char **)v6 + 2);
      if ( v8 )
      {
        *((_QWORD *)v7 + 5) = 0;
        qfree(v8);
      }
      operator delete(v7, 0x40u);
    }
    v9 = *a1;
    if ( *a1 )
    {
      v10 = a1[1];
      if ( v10 )
      {
        for ( i = nullptr; i != v10; ++i )
        {
          v12 = &v9[48 * (_QWORD)i];
          v13 = *((void **)v12 + 3);
          if ( v13 )
          {
            *((_QWORD *)v12 + 4) = 0;
            qfree(v13);
            v9 = *a1;
          }
        }
      }
      a1[1] = nullptr;
      qfree(v9);
    }
    operator delete(a1, 0xE8u);
  }
}
