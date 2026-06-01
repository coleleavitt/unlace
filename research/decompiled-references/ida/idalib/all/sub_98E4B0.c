void __fastcall sub_98E4B0(__int64 a1)
{
  void *v1; // rdi

  if ( *(_BYTE *)(a1 + 16) && *(_DWORD *)(a1 + 8) > 0x40u )
  {
    v1 = *(void **)a1;
    if ( v1 )
      operator delete[](v1);
  }
}
