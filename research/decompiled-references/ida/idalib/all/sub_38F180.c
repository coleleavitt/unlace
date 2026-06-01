void __fastcall sub_38F180(char **a1)
{
  char *v2; // rdi
  char *v3; // rdx
  char *v4; // r12
  char *i; // rbx
  char *v6; // rax
  void *v7; // rdi

  linearray_t_dtr();
  v2 = a1[6];
  if ( v2 )
  {
    a1[7] = nullptr;
    qfree(v2);
  }
  v3 = *a1;
  if ( *a1 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = nullptr; i != v4; ++i )
      {
        v6 = &v3[24 * (_QWORD)i];
        v7 = *(void **)v6;
        if ( *(_QWORD *)v6 )
        {
          *((_QWORD *)v6 + 1) = 0;
          qfree(v7);
          v3 = *a1;
        }
      }
    }
    a1[1] = nullptr;
    qfree(v3);
  }
}
