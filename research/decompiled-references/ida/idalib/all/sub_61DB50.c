void __fastcall sub_61DB50(char **a1)
{
  char *v2; // rdi
  char *v3; // r15
  char *i; // r12
  char *v5; // r13
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  void *v8; // rdi
  void *v9; // rdi

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = &v2[72 * (_QWORD)i];
        v6 = *((_QWORD *)v5 + 5);
        while ( v6 )
        {
          v7 = (_QWORD *)v6;
          sub_61C350(*(_QWORD **)(v6 + 24));
          v8 = *(void **)(v6 + 32);
          v6 = *(_QWORD *)(v6 + 16);
          if ( v8 )
          {
            v7[5] = 0;
            qfree(v8);
          }
          operator delete(v7, 0x38u);
        }
        v9 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v9);
        }
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}
