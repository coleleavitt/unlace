void __fastcall sub_5F4640(char **a1)
{
  char *v2; // rdi
  char *v3; // r12
  char *i; // rbx
  __int64 v5; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1[1];
    if ( v3 )
    {
      for ( i = nullptr; i != v3; ++i )
      {
        v5 = 3LL * (_QWORD)i;
        cleanup_argloc(&v2[8 * v5]);
        v2 = *a1;
      }
    }
    a1[1] = nullptr;
    qfree(v2);
  }
}

