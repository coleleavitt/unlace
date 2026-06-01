void __fastcall sub_DFEC40(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)(a1 + 24);
  if ( v1 )
    operator delete[](v1);
}

