void __fastcall sub_10D8720(__int64 a1)
{
  void *v1; // rbx
  void *v2; // rdi

  v1 = (void *)(a1 + 40);
  sub_228C850(a1 + 16);
  v2 = *(void **)(a1 + 24);
  if ( v2 != v1 )
    operator delete(v2);
}
