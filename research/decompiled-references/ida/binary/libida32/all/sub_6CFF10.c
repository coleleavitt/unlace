void __fastcall sub_6CFF10(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi

  v2 = (char *)a1[10];
  *a1 = &off_2B0DD40;
  if ( v2 )
  {
    v3 = a1[11];
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
          v2 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v2);
  }
  v7 = (void *)a1[7];
  if ( v7 )
  {
    a1[8] = 0;
    qfree(v7);
  }
  operator delete(a1, 0x68u);
}

