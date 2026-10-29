void __fastcall sub_993350(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  char *v4; // rbx
  char *v5; // r12
  void *v6; // rdi

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 24);
  while ( v3 != v2 )
  {
    v2 += 8;
    operator delete();
  }
  v4 = *(char **)(a1 + 64);
  v5 = &v4[16 * *(unsigned int *)(a1 + 72)];
  if ( v4 != v5 )
  {
    do
    {
      v4 += 16;
      operator delete();
    }
    while ( v5 != v4 );
    v5 = *(char **)(a1 + 64);
  }
  if ( v5 != (char *)(a1 + 80) )
    free(v5);
  v6 = *(void **)(a1 + 16);
  if ( v6 != (void *)(a1 + 32) )
    free(v6);
}

