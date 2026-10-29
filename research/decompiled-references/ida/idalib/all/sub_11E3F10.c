void __fastcall sub_11E3F10(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( *(_BYTE *)(a1 + 184) )
  {
    v2 = *(void **)(a1 + 128);
    if ( v2 != (void *)(a1 + 144) )
      operator delete(v2);
  }
  v3 = *(void **)(a1 + 64);
  if ( v3 != (void *)(a1 + 80) )
    operator delete(v3);
}
