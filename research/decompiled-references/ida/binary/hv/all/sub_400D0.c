void __fastcall sub_400D0(_QWORD *a1)
{
  void *v2; // rdi
  char *v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  char *v6; // rax
  void *v7; // rdi

  *a1 = &off_1619E8;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  v3 = (char *)a1[2];
  if ( v3 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[24 * i];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          j__free(v7);
          v3 = (char *)a1[2];
        }
      }
    }
    a1[3] = 0;
    j__free(v3);
  }
  operator delete(a1, 0x40u);
}

