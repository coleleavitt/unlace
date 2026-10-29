void __fastcall sub_6899C0(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // r13
  __int64 v4; // rbx
  char *v5; // rbx
  char *v6; // r12
  void *v7; // rdi

  *(_QWORD *)a1 = &off_47D01A0;
  operator delete();
  sub_C78B50(a1 + 240);
  v2 = *(void **)(a1 + 208);
  if ( v2 != (void *)(a1 + 224) )
    operator delete(v2, *(_QWORD *)(a1 + 224) + 1LL);
  operator delete();
  operator delete();
  operator delete();
  v3 = *(_QWORD *)(a1 + 56);
  v4 = v3 + 8LL * *(unsigned int *)(a1 + 64);
  while ( v4 != v3 )
  {
    v3 += 8;
    operator delete();
  }
  v5 = *(char **)(a1 + 104);
  v6 = &v5[16 * *(unsigned int *)(a1 + 112)];
  if ( v5 != v6 )
  {
    do
    {
      v5 += 16;
      operator delete();
    }
    while ( v6 != v5 );
    v6 = *(char **)(a1 + 104);
  }
  if ( v6 != (char *)(a1 + 120) )
    free(v6);
  v7 = *(void **)(a1 + 56);
  if ( v7 != (void *)(a1 + 72) )
    free(v7);
  sub_62FC10((_QWORD *)a1);
}

