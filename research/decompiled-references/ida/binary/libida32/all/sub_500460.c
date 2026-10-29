void __fastcall sub_500460(void **a1)
{
  char *v2; // rdi
  void *v3; // r13
  void *i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  if ( a1 )
  {
    sub_4FCE30(a1[14]);
    v2 = (char *)a1[4];
    if ( v2 )
    {
      v3 = a1[5];
      if ( v3 )
      {
        for ( i = nullptr; i != v3; i = (char *)i + 1 )
        {
          v5 = &v2[64 * (_QWORD)i];
          v6 = *((void **)v5 + 4);
          if ( v6 )
          {
            *((_QWORD *)v5 + 5) = 0;
            qfree(v6);
          }
          v7 = *(void **)v5;
          if ( *(_QWORD *)v5 )
          {
            *((_QWORD *)v5 + 1) = 0;
            qfree(v7);
          }
          v2 = (char *)a1[4];
        }
      }
      a1[5] = nullptr;
      qfree(v2);
    }
    operator delete(a1, 0xA0u);
  }
}

