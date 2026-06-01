void __fastcall sub_494260(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi

  *a1 = &off_2B2C7F0;
  v2 = (char *)a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      v4 = 0;
      for ( i = 0; i != v3; ++i )
      {
        v6 = &v2[v4];
        clear_tinfo_t(&v2[v4 + 64]);
        v7 = *(void **)&v2[v4 + 40];
        if ( v7 )
        {
          *((_QWORD *)v6 + 6) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 2);
        if ( v8 )
        {
          *((_QWORD *)v6 + 3) = 0;
          qfree(v8);
        }
        v2 = (char *)a1[5];
        v4 += 184;
      }
    }
    a1[6] = 0;
    qfree(v2);
  }
}
