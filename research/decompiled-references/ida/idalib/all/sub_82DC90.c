void __fastcall sub_82DC90(_QWORD *a1)
{
  char *v1; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi

  v1 = (char *)a1[1];
  *a1 = &off_2B3CA90;
  if ( v1 )
  {
    v3 = a1[2];
    if ( v3 )
    {
      for ( i = 0; i != v3; ++i )
      {
        v5 = &v1[24 * i];
        v6 = *(void **)v5;
        if ( *(_QWORD *)v5 )
        {
          *((_QWORD *)v5 + 1) = 0;
          qfree(v6);
          v1 = (char *)a1[1];
        }
      }
    }
    a1[2] = 0;
    qfree(v1);
  }
}
