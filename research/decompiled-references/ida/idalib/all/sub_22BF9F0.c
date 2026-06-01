void __fastcall sub_22BF9F0(void **a1)
{
  void **v2; // rdi

  if ( a1 )
  {
    v2 = (void **)*a1;
    if ( v2 != a1 + 2 )
      operator delete(v2);
    operator delete(a1, 0x20u);
  }
}
