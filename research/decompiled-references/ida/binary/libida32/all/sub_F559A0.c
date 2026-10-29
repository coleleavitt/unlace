void __fastcall sub_F559A0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  operator delete();
  v2 = *(void **)(a1 + 616);
  if ( v2 != (void *)(a1 + 632) )
    free(v2);
  if ( !*(_BYTE *)(a1 + 580) )
    free(*(void **)(a1 + 560));
  v3 = *(void **)(a1 + 32);
  if ( v3 != (void *)(a1 + 48) )
    free(v3);
}

