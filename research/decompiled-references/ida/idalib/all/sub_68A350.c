void __fastcall sub_68A350(_QWORD *a1)
{
  int v2; // ebx
  __int64 v3; // rax
  const char *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char *v7; // rax
  void *v8; // rdi
  __int64 i; // rbx
  char *v10; // rdx
  void *v11; // rdi

  if ( !a1[2] )
  {
    v8 = (void *)a1[1];
    if ( !v8 )
      return;
    goto LABEL_12;
  }
  v2 = 0;
  v3 = 0;
  do
  {
    v4 = haystack;
    v5 = a1[1] + 24 * v3;
    if ( *(_QWORD *)(v5 + 8) )
      v4 = *(const char **)v5;
    plan_to_apply_idasgn(v4);
    ++v2;
    v6 = a1[2];
    v3 = v2;
  }
  while ( v2 < v6 );
  v7 = (char *)a1[1];
  v8 = v7;
  if ( v7 )
  {
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v10 = &v7[24 * i];
        v11 = *(void **)v10;
        if ( *(_QWORD *)v10 )
        {
          *((_QWORD *)v10 + 1) = 0;
          qfree(v11);
          v7 = (char *)a1[1];
        }
        v8 = v7;
      }
    }
LABEL_12:
    a1[2] = 0;
    qfree(v8);
    a1[1] = 0;
    a1[3] = 0;
  }
}
