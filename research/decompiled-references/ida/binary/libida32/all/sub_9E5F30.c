void __fastcall sub_9E5F30(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  if ( *(_BYTE *)(a1 + 144) )
  {
    v2 = *(void **)(a1 + 112);
    if ( v2 != (void *)(a1 + 128) )
      operator delete(v2);
  }
  if ( *(_BYTE *)(a1 + 104) )
  {
    v3 = *(void **)(a1 + 72);
    if ( v3 != (void *)(a1 + 88) )
      operator delete(v3);
  }
  v4 = *(void **)(a1 + 40);
  if ( v4 != (void *)(a1 + 56) )
    operator delete(v4);
  if ( *(_QWORD *)a1 != a1 + 16 )
    operator delete(*(void **)a1);
}

