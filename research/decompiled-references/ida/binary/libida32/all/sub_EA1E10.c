void __fastcall sub_EA1E10(void **a1)
{
  void *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    operator delete();
    operator delete(v1, 0x18u);
  }
}

