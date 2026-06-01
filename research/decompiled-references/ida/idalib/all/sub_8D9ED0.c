void __fastcall sub_8D9ED0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi

  *a1 = &off_2B3E758;
  v2 = (void *)a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[8];
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3);
  }
  v4 = (char *)a1[2];
  if ( v4 )
  {
    v5 = a1[3];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[24 * i];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v8);
          v4 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    qfree(v4);
  }
  operator delete(a1, 0x80u);
}
