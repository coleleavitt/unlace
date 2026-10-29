void __fastcall sub_2015AC0(void **a1)
{
  if ( *a1 != a1 + 2 )
    operator delete(*a1);
}
