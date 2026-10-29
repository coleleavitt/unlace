void __fastcall sub_629560(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  char *v4; // rbx
  char *v5; // r12
  void *v6; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 40);
  while ( v3 != v2 )
  {
    v2 += 8;
    operator delete();
  }
  v4 = *(char **)(a1 + 80);
  v5 = &v4[16 * *(unsigned int *)(a1 + 88)];
  if ( v4 != v5 )
  {
    do
    {
      v4 += 16;
      operator delete();
    }
    while ( v5 != v4 );
    v5 = *(char **)(a1 + 80);
  }
  if ( v5 != (char *)(a1 + 96) )
    free(v5);
  v6 = *(void **)(a1 + 32);
  if ( v6 != (void *)(a1 + 48) )
    free(v6);
}

