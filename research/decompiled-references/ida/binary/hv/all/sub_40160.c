void __fastcall sub_40160(_QWORD *a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi

  v2 = (char *)a1[5];
  *a1 = &off_161838;
  if ( v2 )
  {
    v3 = a1[6];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v2[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          j__free(v6);
          v2 = (char *)a1[5];
        }
      }
    }
    a1[6] = 0;
    j__free(v2);
  }
  v7 = (void *)a1[2];
  if ( v7 )
  {
    a1[3] = 0;
    j__free(v7);
  }
  operator delete(a1, 0x40u);
}

