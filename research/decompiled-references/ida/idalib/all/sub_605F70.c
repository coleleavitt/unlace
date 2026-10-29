void __fastcall sub_605F70(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  *a1 = &off_2B32650;
  v2 = (char *)a1[5];
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[48 * i];
        v6 = *((void **)v5 + 3);
        if ( v6 )
        {
          *((_QWORD *)v5 + 4) = 0;
          qfree(v6);
        }
        v7 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v7);
        }
        v2 = (char *)a1[5];
      }
    }
    a1[6] = 0;
    qfree(v2);
  }
}
