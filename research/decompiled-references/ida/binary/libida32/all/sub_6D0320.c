void __fastcall sub_6D0320(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi
  void *v8; // rdi

  *a1 = &off_2B0DE90;
  v2 = (void *)a1[14];
  if ( v2 )
  {
    a1[15] = 0;
    qfree(v2);
  }
  v3 = (char *)a1[10];
  *a1 = &off_2B0DD40;
  if ( v3 )
  {
    v4 = a1[11];
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
          v3 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v3);
  }
  v8 = (void *)a1[7];
  if ( v8 )
  {
    a1[8] = 0;
    qfree(v8);
  }
}

