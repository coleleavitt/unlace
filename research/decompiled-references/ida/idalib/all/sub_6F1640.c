void __fastcall sub_6F1640(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi
  char *v5; // rdx
  __int64 v6; // r12
  __int64 i; // rbx
  char *v8; // rax
  void *v9; // rdi
  void *v10; // rdi

  *a1 = &off_2B37ED0;
  v2 = (void *)a1[18];
  if ( v2 )
  {
    a1[19] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[15];
  *a1 = &off_2B37DA0;
  if ( v3 )
  {
    a1[16] = 0;
    qfree(v3);
  }
  v4 = a1[13];
  *a1 = &off_2B37D80;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (char *)a1[10];
  a1[13] = 0;
  *a1 = &off_2B37CE0;
  if ( v5 )
  {
    v6 = a1[11];
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = &v5[24 * i];
        v9 = *(void **)v8;
        if ( *(_QWORD *)v8 )
        {
          *((_QWORD *)v8 + 1) = 0;
          qfree(v9);
          v5 = (char *)a1[10];
        }
      }
    }
    a1[11] = 0;
    qfree(v5);
  }
  v10 = (void *)a1[7];
  if ( v10 )
  {
    a1[8] = 0;
    qfree(v10);
  }
}
