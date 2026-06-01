void __fastcall sub_46CC90(_QWORD *a1)
{
  char *v2; // rdi
  __int64 v3; // r13
  __int64 i; // rbp
  char *v5; // rbx
  void *v6; // rdi
  void *v7; // rdi

  *a1 = &off_2B021C0;
  v2 = (char *)a1[6];
  if ( v2 )
  {
    v3 = a1[7];
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
        v2 = (char *)a1[6];
      }
    }
    a1[7] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x48u);
}

