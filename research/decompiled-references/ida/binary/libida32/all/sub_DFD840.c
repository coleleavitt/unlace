void __fastcall sub_DFD840(void **a1)
{
  void **v1; // rax

  v1 = (void **)*a1;
  if ( *a1 )
  {
    if ( !*v1 || (free(*v1), *a1) )
      free(*a1);
  }
}

