void __fastcall sub_1AA0B10(__int64 a1)
{
  bool v1; // cc
  void *v2; // rdi

  v1 = *(_DWORD *)(a1 + 8) <= 0x40u;
  *(_BYTE *)(a1 + 16) = 0;
  if ( !v1 )
  {
    v2 = *(void **)a1;
    if ( v2 )
      operator delete[](v2);
  }
}
