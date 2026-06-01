void __fastcall sub_1A700(__int64 a1)
{
  char *v2; // rdx
  __int64 v3; // r12
  __int64 i; // rbx
  char *v5; // rax
  void *v6; // rdi
  void *v7; // rdi

  v2 = *(char **)(a1 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
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
          v2 = *(char **)(a1 + 24);
        }
      }
    }
    *(_QWORD *)(a1 + 32) = 0;
    j__free(v2);
  }
  v7 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    j__free(v7);
  }
}

