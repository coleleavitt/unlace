void __fastcall sub_380690(void **a1)
{
  void *v2; // rdi

  if ( a1 )
  {
    if ( a1[1] )
    {
      if ( !under_debugger )
        interr(1829);
      BUG();
    }
    v2 = *a1;
    if ( v2 )
      qfree(v2);
    operator delete(a1, 0x30u);
  }
}
