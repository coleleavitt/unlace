void __fastcall sub_1F6AA30(void **a1)
{
  void **v2; // rdi

  if ( a1 )
  {
    v2 = (void **)*a1;
    if ( v2 != a1 + 2 )
      free(v2);
    operator delete(a1, 0x418u);
  }
}
