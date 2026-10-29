void __fastcall sub_985190(__int64 a1)
{
  void *v1; // rbx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
  {
    operator delete();
    operator delete(v1, 0x18u);
  }
}

