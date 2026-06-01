void __fastcall sub_EB34C0(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rdi

  v1 = (void *)(a1 + 136);
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  operator delete();
  v2 = *(void **)(a1 + 120);
  if ( v2 != v1 )
    free(v2);
}

