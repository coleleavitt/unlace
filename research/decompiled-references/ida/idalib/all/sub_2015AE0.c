void __fastcall sub_2015AE0(void **a1)
{
  void *v2; // rdi

  v2 = a1[5];
  if ( v2 )
    operator delete(v2);
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
}
