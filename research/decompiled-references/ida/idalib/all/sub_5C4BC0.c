void __fastcall sub_5C4BC0(_QWORD *ptr)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  *ptr = &off_2B2F9B0;
  v2 = (char *)ptr[9];
  if ( v2 )
  {
    v3 = ptr[10];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[64 * i];
        v6 = *((void **)v5 + 5);
        if ( v6 )
        {
          *((_QWORD *)v5 + 6) = 0;
          qfree(v6);
        }
        v7 = *((void **)v5 + 2);
        if ( v7 )
        {
          *((_QWORD *)v5 + 3) = 0;
          qfree(v7);
        }
        v2 = (char *)ptr[9];
      }
    }
    ptr[10] = 0;
    qfree(v2);
  }
  v8 = (void *)ptr[2];
  if ( v8 )
  {
    ptr[3] = 0;
    qfree(v8);
  }
  qfree(ptr);
}
