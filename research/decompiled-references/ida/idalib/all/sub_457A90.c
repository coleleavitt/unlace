void __fastcall sub_457A90(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // r12
  void **v4; // rbp
  void *v5; // r13
  char *v6; // rdx
  void *i; // rbx
  char *v8; // rax
  void *v9; // rdi
  void *v10; // rdx

  v2 = (void *)a1[20];
  if ( v2 )
  {
    a1[21] = 0;
    qfree(v2);
  }
  v3 = (void **)(a1 + 1);
  v4 = (void **)(a1 + 19);
  while ( v4 != v3 )
  {
    while ( 1 )
    {
      v4 -= 3;
      if ( !*v4 )
        break;
      v5 = v4[1];
      if ( v5 )
      {
        v6 = (char *)*v4;
        for ( i = nullptr; i != v5; i = (char *)i + 1 )
        {
          v8 = &v6[24 * (_QWORD)i];
          v9 = *(void **)v8;
          if ( *(_QWORD *)v8 )
          {
            *((_QWORD *)v8 + 1) = 0;
            qfree(v9);
            v6 = (char *)*v4;
          }
        }
        v4[1] = nullptr;
        qfree(v6);
      }
      else
      {
        v10 = *v4;
        v4[1] = nullptr;
        qfree(v10);
      }
      if ( v4 == v3 )
        return;
    }
  }
}
