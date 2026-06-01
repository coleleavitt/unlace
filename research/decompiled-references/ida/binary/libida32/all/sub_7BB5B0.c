void __fastcall sub_7BB5B0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r12
  __int64 i; // rbx
  char *v7; // rax
  void *v8; // rdi

  *a1 = &off_2B11B30;
  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
  }
  v4 = (char *)a1[3];
  if ( v4 )
  {
    v5 = a1[4];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = &v4[24 * i];
        v8 = *(void **)v7;
        if ( *(_QWORD *)v7 )
        {
          *((_QWORD *)v7 + 1) = 0;
          qfree(v8);
          v4 = (char *)a1[3];
        }
      }
    }
    a1[4] = 0;
    qfree(v4);
  }
}

