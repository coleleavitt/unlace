__int64 (__fastcall **__fastcall sub_67A770(__int64 a1))()
{
  __int64 v2; // r13
  __int64 v3; // rbx
  char *v4; // rbx
  char *v5; // r12
  void *v6; // rdi

  v2 = *(_QWORD *)(a1 + 160);
  *(_QWORD *)a1 = &off_47D00E8;
  v3 = v2 + 8LL * *(unsigned int *)(a1 + 168);
  while ( v3 != v2 )
  {
    v2 += 8;
    operator delete();
  }
  v4 = *(char **)(a1 + 208);
  v5 = &v4[16 * *(unsigned int *)(a1 + 216)];
  if ( v4 != v5 )
  {
    do
    {
      v4 += 16;
      operator delete();
    }
    while ( v5 != v4 );
    v5 = *(char **)(a1 + 208);
  }
  if ( v5 != (char *)(a1 + 224) )
    free(v5);
  v6 = *(void **)(a1 + 160);
  if ( v6 != (void *)(a1 + 176) )
    free(v6);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  *(_QWORD *)a1 = off_47D0098;
  return off_47D0098;
}

