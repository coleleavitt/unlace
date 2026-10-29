void __fastcall sub_200ED00(__int64 a1)
{
  void *v2; // rdi

  if ( *(_DWORD *)(a1 + 24) > 0x40u )
  {
    v2 = *(void **)(a1 + 16);
    if ( v2 )
      operator delete[](v2);
  }
  if ( *(_DWORD *)(a1 + 8) > 0x40u )
  {
    if ( *(_QWORD *)a1 )
      operator delete[](*(void **)a1);
  }
}
