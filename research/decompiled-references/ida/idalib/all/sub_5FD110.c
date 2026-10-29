void __fastcall sub_5FD110(void *a1)
{
  void *v1; // r12
  _QWORD *v2; // rbp
  char *v3; // rdx
  __int64 v4; // r13
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  void *v8; // rdi

  if ( a1 )
  {
    v1 = a1;
    do
    {
      v2 = v1;
      sub_5FD110(*((void **)v1 + 3));
      v3 = *((char **)v1 + 7);
      v1 = *((void **)v1 + 2);
      if ( v3 )
      {
        v4 = v2[8];
        if ( v4 )
        {
          for ( i = 0; i != v4; ++i )
          {
            v6 = &v3[24 * i];
            v7 = *(void **)v6;
            if ( *(_QWORD *)v6 )
            {
              *((_QWORD *)v6 + 1) = 0;
              qfree(v7);
              v3 = (char *)v2[7];
            }
          }
        }
        v2[8] = 0;
        qfree(v3);
      }
      v8 = (void *)v2[4];
      if ( v8 )
      {
        v2[5] = 0;
        qfree(v8);
      }
      operator delete(v2, 0x50u);
    }
    while ( v1 );
  }
}
