void __fastcall sub_62ADA0(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi

  v2 = (char *)a1[6];
  *a1 = off_2B0D1D8;
  if ( v2 )
  {
    v3 = a1[7];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v2 = (char *)a1[6];
        }
      }
    }
    a1[7] = 0;
    qfree(v2);
  }
  v7 = (void *)a1[3];
  if ( v7 )
  {
    a1[4] = 0;
    qfree(v7);
  }
}

