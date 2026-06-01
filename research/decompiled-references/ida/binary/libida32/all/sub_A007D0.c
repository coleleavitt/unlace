void __fastcall sub_A007D0(__int64 *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  if ( *a1 )
  {
    sub_9FFD50(*a1);
    operator delete(v1, 0x388u);
  }
}

