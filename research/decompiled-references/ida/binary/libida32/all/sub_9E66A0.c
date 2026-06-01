void __fastcall sub_9E66A0(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  if ( *(_BYTE *)(a1 + 352) )
  {
    v2 = *(void **)(a1 + 320);
    if ( v2 != (void *)(a1 + 336) )
      operator delete(v2);
  }
  if ( *(_BYTE *)(a1 + 312) )
  {
    v3 = *(void **)(a1 + 280);
    if ( v3 != (void *)(a1 + 296) )
      operator delete(v3);
  }
  if ( *(_BYTE *)(a1 + 272) )
  {
    v4 = *(void **)(a1 + 240);
    if ( v4 != (void *)(a1 + 256) )
      operator delete(v4);
  }
  if ( *(_BYTE *)(a1 + 232) )
  {
    v5 = *(void **)(a1 + 200);
    if ( v5 != (void *)(a1 + 216) )
      operator delete(v5);
  }
  if ( *(_BYTE *)(a1 + 192) )
  {
    v6 = *(void **)(a1 + 160);
    if ( v6 != (void *)(a1 + 176) )
      operator delete(v6);
  }
  sub_9E5F30(a1);
}

