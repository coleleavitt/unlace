void __fastcall sub_5BC720(_QWORD *ptr)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi

  *ptr = &off_2B05DB0;
  v2 = (char *)ptr[6];
  if ( v2 )
  {
    v3 = ptr[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[64 * i];
        v6 = *((void **)v5 + 4);
        if ( v6 )
        {
          *((_QWORD *)v5 + 5) = 0;
          qfree(v6);
        }
        v7 = *((void **)v5 + 1);
        if ( v7 )
        {
          *((_QWORD *)v5 + 2) = 0;
          qfree(v7);
        }
        v2 = (char *)ptr[6];
      }
    }
    ptr[7] = 0;
    qfree(v2);
  }
  v8 = (void *)ptr[3];
  if ( v8 )
  {
    ptr[4] = 0;
    qfree(v8);
  }
  qfree(ptr);
}

